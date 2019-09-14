#include "Engine.hpp"
#include "Enemy.hpp"
#include "Player.hpp"
#include "BasicCharacter.hpp"
#include "LaserBeam.hpp"
#include "AmmoPack.hpp"

Engine::Engine(void) {
    this->width = WIN_HEIGHT;
    this->height = WIN_HEIGHT;

    //Initialization
    initscr();
    //disabled show character from keyboard press
    noecho();
    curs_set(false);
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_WHITE, COLOR_BLACK);
    this->getScreenSize();
    this->background = this->setWindow(WIN_HEIGHT,  WIN_WIDTH + 50, 13, 25 );
    this->mainWindow = this->setWindow(WIN_HEIGHT,  WIN_WIDTH, WIN_HEIGHT / 3, WIN_WIDTH / 2);
    this->intefaceWindow = this->setWindow(WIN_HEIGHT / 4,  WIN_WIDTH, WIN_HEIGHT / 18, WIN_WIDTH / 2);
//    nodelay(this->background, true);
    nodelay(this->mainWindow, true);
    nodelay(this->intefaceWindow, true);
}
Engine::~Engine() {
}
Engine::Engine(const Engine &engine) {
    *this = engine;
}
Engine &Engine::operator=(const Engine &engine) {
    this->height = engine.height;
    return *this;
}
void Engine::getScreenSize() {
    getmaxyx(stdscr, this->maxHeight, this->maxWidth);
}
WINDOW* Engine::setWindow(int nlines, int ncols, int y0, int x0) {
    return newwin(nlines, ncols, y0, x0);
}
void Engine::BeginGame() {
    int keyPressSymbol = 0;
    int random = 0;
    size_t initTime = time(0);
    AsciiPictures pictures = AsciiPictures();
    getmaxyx(this->mainWindow, this->maxHeight, this->maxWidth);

    pictures.startGame();
    box(this->mainWindow, 1, 0);
    box(this->intefaceWindow, 1, 0);
    box(this->background, 0, 0);
    pictures.mountain(this->background);
    wrefresh(this->background);
    wrefresh(this->mainWindow);
    refresh();
    Enemy* enemies = new Enemy[MAX_ENEMIES];
    LaserBeam* beams = new LaserBeam[MAX_LASER_BEAMS];
    AmmoPack* ammoPack = new AmmoPack();

    Player* player = new Player(WIN_WIDTH / 2, WIN_HEIGHT - 2, this->mainWindow);

    int lastMin = 0;
    int lastSec = 0;

    wattron(this->intefaceWindow, COLOR_PAIR(2));
    wattron(this->background, COLOR_PAIR(2));
    while ((keyPressSymbol = wgetch(this->mainWindow)) != 'q') {
        wattron(this->mainWindow, COLOR_PAIR(6));
        if (player->getHP() > 0) {
            player->moveCharacter(keyPressSymbol, beams);
            player->displayPlayer();
            player->hitByEnemy(enemies);
            player->hitByLaserBeam(beams);
            player->hitByAmmoPack(ammoPack);
            if (random % 10 == 0) {
                ammoPack->displayAmmoPack(mainWindow);
            }
            for (int i = 0; i < MAX_LASER_BEAMS; i++) {
                if (beams->getPrevX() > 0 || beams->getPrevY() > 0) {
                    mvwaddch(mainWindow, beams[i].getPrevY() + 2, beams[i].getPrevX(), ' ');
                    beams[i].setPrevX(-1);
                    beams[i].setPrevY(-1);
                }
            }
            lastMin = (time(0) - initTime) / 60;
            lastSec = (time(0) - initTime) % 60;
            mvwprintw(this->intefaceWindow, 2, 4, "Play time: %02d:%02d", lastMin, lastSec);
            for (int i = 0; i < MAX_LASER_BEAMS; i++) {
                if (beams[i].getWhoShot() == "player") {
                    beams[i].displayBeam(mainWindow);
                } else {
                    if (random % 5 == 0) {
                        beams[i].displayBeam(mainWindow);
                    }
                }
            }
            for (int i = 0; i < MAX_ENEMIES; ++i) {
                if (enemies[i].hitByLaser(this->mainWindow, beams)) {
                    for (int i = 0; i < MAX_LASER_BEAMS; i++) {
                        if (beams->getPrevX() > 0 || beams->getPrevY() > 0) {
                            mvwaddch(mainWindow, beams[i].getPrevY(), beams[i].getPrevX(), ' ');
                            beams[i].setPrevX(-1);
                            beams[i].setPrevY(-1);
                        }
                    }
                    player->addScore(20);
                }
                if (random % 30 == 0) {
                    enemies[i].displayEnemy(this->mainWindow);
                }
                if (random % 110 == 0 && enemies[i].getType() == '*') {
                    enemies[i].shoot(beams);
                }
            }
            wrefresh(this->intefaceWindow);
            refresh();
            wrefresh(this->mainWindow);
            random++;
            usleep(16000);
        }
        if (random % 200 == 0) {
            player->addScore(10);
        }

        mvwprintw(this->intefaceWindow, 4, 4, "Health: %i,   Ammo: %i", player->getHP(), player->getAmmo());
        mvwprintw(this->intefaceWindow, 6, 4, "Score: %i", player->getScore());
        if (player->getHP() <= 0) {
            mvwprintw(this->intefaceWindow, 2, 4, "Play time: %02d:%02d", lastMin, lastSec);
            pictures.gameOver(this->mainWindow);
            if (keyPressSymbol == 'r' || keyPressSymbol == 'R' ) {
                delete  player;
                delete [] enemies;
                keyPressSymbol = -1;
                lastSec = 0;
                lastMin = 0;
                wclear(this->mainWindow);
                box(this->mainWindow, 1, 0);
                player = new Player(WIN_WIDTH / 2, WIN_HEIGHT - 2, this->mainWindow);
                enemies = new Enemy[MAX_ENEMIES];
            }
        }
        wrefresh(this->mainWindow);
        wrefresh(this->intefaceWindow);
    }
    if (keyPressSymbol != 'q') {
        while((keyPressSymbol = wgetch(this->intefaceWindow)) != 'q');
    }
    delete [] enemies;
    delete player;
    endwin();

}