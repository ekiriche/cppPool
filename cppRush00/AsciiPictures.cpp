#include "Engine.hpp"

#define START_GAME 150000

AsciiPictures::AsciiPictures(void) {
}

AsciiPictures::~AsciiPictures() {
}

AsciiPictures::AsciiPictures(const AsciiPictures &asciipictures) {
    *this = asciipictures;
}

AsciiPictures &AsciiPictures::operator=(const AsciiPictures &asciipictures) {
    this->name = asciipictures.name;
    return *this;
}

void AsciiPictures::startGame() const {
    int y;
    int x;
    int z;
    getmaxyx(stdscr, y, x);
    y = y / 3;
    z = y;
    x = x / 3;
    wattron(stdscr, COLOR_PAIR(2));
//    for (; y > -20 ; y--) {
//        mvwaddstr(stdscr, y, x,     "                                                888     d8b                     ");
//        mvwaddstr(stdscr, y + 1, x, "                                                888     Y8P                     ");
//        mvwaddstr(stdscr, y + 2, x, "                                                888                             ");
//        mvwaddstr(stdscr, y + 3, x, ".d8888b 88888b.  8888b.  .d8888b .d88b. .d8888b 88888b. 88888888b. .d8888b      ");
//        mvwaddstr(stdscr, y + 4, x, "88K     888 \"88b    \"88bd88P\"   d8P  Y8b88K     888 \"88b888888 \"88b88K     ");
//        mvwaddstr(stdscr, y + 5, x, "\"Y8888b.888  888.d888888888     88888888\"Y8888b.888  888888888  888\"Y8888b.  ");
//        mvwaddstr(stdscr, y + 6, x, "     X88888 d88P888  888Y88b.   Y8b.         X88888  888888888 d88P     X88     ");
//        mvwaddstr(stdscr, y + 7, x, " 88888P'88888P\" \"Y888888 \"Y8888P \"Y8888  88888P'888  88888888888P\"  88888P'");
//        mvwaddstr(stdscr, y + 8, x, "        888                                                888                  ");
//        mvwaddstr(stdscr, y + 9, x, "        888                                                888                  ");
//        mvwaddstr(stdscr, y + 10, x,"        888                                                888                  ");
//        refresh();
//        usleep(START_GAME);
//        clear();
//    }
    wattron(stdscr, COLOR_PAIR(3));
        mvwaddstr(stdscr, z + 1, x,  "   PRESS SPACE            *     .--.");
        mvwaddstr(stdscr, z + 2, x,  "   TO START GAME               / /  `");
        mvwaddstr(stdscr, z + 3, x,  "               +               | |");
        mvwaddstr(stdscr, z + 4, x,  "                      '         \\ \\__,");
        mvwaddstr(stdscr, z + 5, x,  "                  *          +   '--'  *");
        mvwaddstr(stdscr, z + 6, x,  "                      +   /\\");
        mvwaddstr(stdscr, z + 7, x,  "         +              .'  '.   *");
        mvwaddstr(stdscr, z + 8, x,  "                *      /======\\      +    Move up       - ^");
        mvwaddstr(stdscr, z + 9, x,  "                      ;:.  _   ;          Move left     - <");
        mvwaddstr(stdscr, z + 10, x, "                      |:. (_)  |          Move right    - >");
        mvwaddstr(stdscr, z + 11, x, "                      |:.  _   |          Move down     - Z");
        mvwaddstr(stdscr, z + 12, x, "            +         |:. (_)  |          Shoot         - Z");
        mvwaddstr(stdscr, z + 13, x, "                      ;:.      ;");
        mvwaddstr(stdscr, z + 14, x, "                   .' \\:.    / `.");
        mvwaddstr(stdscr, z + 15, x, "                  / .-'':._.'`-. \\");
        mvwaddstr(stdscr, z + 16, x, "                  |/    /||\\    \\|");
        mvwaddstr(stdscr, z + 17, x, "            jgs _..--\"\"\"````\"\"\"--.._");
        mvwaddstr(stdscr, z + 18, x, "          _.-'``                    ``'-._");
        mvwaddstr(stdscr, z + 19, x, "        -'                                '-");
        refresh();
    while(1)
    {
        if (getch() == ' ')
            break;
    }
}

void AsciiPictures::gameOver(WINDOW * window) const {
    wattron(window, COLOR_PAIR(2));
    mvwaddstr(window, 15, 10,   "  ________    _____      _____   ___________ ________   ____   _________________________ ");
    mvwaddstr(window, 15 + 1, 10, " /  _____/   /  _  \\    /     \\  \\_   _____/ \\_____  \\  \\   \\ /   /\\_   _____/\\______   \\");
    mvwaddstr(window, 15 + 2, 10, "/   \\  ___  /  /_\\  \\  /  \\ /  \\  |    __)_   /   |   \\  \\   Y   /  |    __)_  |       _/");
    mvwaddstr(window, 15 + 3, 10, "\\    \\_\\  \\/    |    \\/    Y    \\ |        \\ /    |    \\  \\     /   |        \\ |    |   \\");
    mvwaddstr(window, 15 + 4, 10, " \\______  /\\____|__  /\\____|__  //_______  / \\_______  /   \\___/   /_______  / |____|_  /");
    mvwaddstr(window, 15 + 5, 10, "       \\/         \\/         \\/         \\/          \\/                    \\/         \\/ ");
    mvwaddstr(window, 15 + 6, 10, "       ");
    wattron(window, COLOR_PAIR(1));
    mvwaddstr(window, 15 + 7, 10, "                         Press 'r' to restart or 'q' to exit                                    ");
    refresh();
}

void AsciiPictures::mountain(WINDOW *window) const {
    wattron(window, COLOR_PAIR(1));
    mvwaddstr(window, 0 + 1, 1, "XXXXXX******");
    mvwaddstr(window, 0 + 2, 1, "*XXXXX*****");
    mvwaddstr(window, 0 + 3, 1, "***XXXX********");
    mvwaddstr(window, 0 + 4, 1, "**XXX***********");
    mvwaddstr(window, 0 + 5, 1, "*****XXX***");
    mvwaddstr(window, 0 + 6, 1, "XXXXXX**********");
    mvwaddstr(window, 0 + 7, 1, "*XXXXX*********");
    mvwaddstr(window, 0 + 8, 1, "***XXXX*********");
    mvwaddstr(window, 0 + 9, 1, "**XXX**********");
    mvwaddstr(window, 0 + 10, 1, "*****XXX***");
    mvwaddstr(window, 0 + 11, 1, "XXXXXX*********");
    mvwaddstr(window, 0 + 12, 1, "*XXXXX*******");
    mvwaddstr(window, 0 + 13, 1, "***XXXX*******");
    mvwaddstr(window, 0 + 14, 1, "**XXX**************");
    mvwaddstr(window, 0 + 15, 1, "*****XXX********");
    mvwaddstr(window, 0 + 16, 1, "XXXXXX********");
    mvwaddstr(window, 0 + 17, 1, "*XXXXX***********");
    mvwaddstr(window, 0 + 18, 1, "***XXXX********");
    mvwaddstr(window, 0 + 19, 1, "**XXX***************");
    mvwaddstr(window, 0 + 20, 1, "*****XXX********");
    mvwaddstr(window, 0 + 21, 1, "XXXXXX********");
    mvwaddstr(window, 0 + 22, 1, "*XXXXX*******");
    mvwaddstr(window, 0 + 23, 1, "***XXXX********");
    mvwaddstr(window, 0 + 24, 1, "**XXX************");
    mvwaddstr(window, 0 + 25, 1, "*****XXX*******");
    mvwaddstr(window, 0 + 26, 1, "XXXXXX*******");
    mvwaddstr(window, 0 + 27, 1, "*XXXXX***********");
    mvwaddstr(window, 0 + 28, 1, "***XXXX********");
    mvwaddstr(window, 0 + 29, 1, "**XXX*********");
    mvwaddstr(window, 0 + 30, 1, "*****XXX*********");
    mvwaddstr(window, 0 + 31, 1, "XXXXXX**********");
    mvwaddstr(window, 0 + 32, 1, "*XXXXX*********");
    mvwaddstr(window, 0 + 33, 1, "***XXXX**************");
    mvwaddstr(window, 0 + 34, 1, "**XXX************");
    mvwaddstr(window, 0 + 35, 1, "*****XXX********");
    mvwaddstr(window, 0 + 36, 1, "*****XXX*********");
    mvwaddstr(window, 0 + 37, 1, "XXXXXX**********");
    mvwaddstr(window, 0 + 38, 1, "*XXXXX*********");

    mvwaddstr(window, 0 + 1, 134,  "***XXXXXX******");
    mvwaddstr(window, 0 + 2, 134,  "    *XXXXX*****");
    mvwaddstr(window, 0 + 3, 134,  " **XXXX********");
    mvwaddstr(window, 0 + 4, 134,  "*XXX***********");
    mvwaddstr(window, 0 + 5, 134,  "  *******XXX***");
    mvwaddstr(window, 0 + 6, 134,  "      *********");
    mvwaddstr(window, 0 + 7, 134,  "  *XXX*********");
    mvwaddstr(window, 0 + 8, 134,  "***************");
    mvwaddstr(window, 0 + 9, 134,  "**XXX**********");
    mvwaddstr(window, 0 + 10, 134, "********XXX****");
    mvwaddstr(window, 0 + 11, 134, "     **********");
    mvwaddstr(window, 0 + 12, 134, "  *************");
    mvwaddstr(window, 0 + 13, 134, "****XXX********");
    mvwaddstr(window, 0 + 14, 134, "  *************");
    mvwaddstr(window, 0 + 15, 134, "  ***X*********");
    mvwaddstr(window, 0 + 16, 134, "    ***********");
    mvwaddstr(window, 0 + 17, 134, "  *************");
    mvwaddstr(window, 0 + 18, 134, "    ***********");
    mvwaddstr(window, 0 + 19, 134, "    ***X*******");
    mvwaddstr(window, 0 + 20, 134, "***X*XX********");
    mvwaddstr(window, 0 + 21, 134, "  *************");
    mvwaddstr(window, 0 + 22, 134, "**X*XXXX*******");
    mvwaddstr(window, 0 + 23, 134, "   ************");
    mvwaddstr(window, 0 + 24, 134, "  *************");
    mvwaddstr(window, 0 + 25, 134, "     ****X*****");
    mvwaddstr(window, 0 + 26, 134, "  XXXXXX*******");
    mvwaddstr(window, 0 + 27, 134, "  *XXXXX*******");
    mvwaddstr(window, 0 + 28, 134, "  ***XXXX******");
    mvwaddstr(window, 0 + 29, 134, " **XXX*********");
    mvwaddstr(window, 0 + 30, 134, "***XXX*********");
    mvwaddstr(window, 0 + 31, 134, "    XX*********");
    mvwaddstr(window, 0 + 32, 134, "   *XX*********");
    mvwaddstr(window, 0 + 33, 134, "***************");
    mvwaddstr(window, 0 + 34, 134, "  *************");
    mvwaddstr(window, 0 + 35, 134, " ***XXX********");
    mvwaddstr(window, 0 + 36, 134, "***XXX*********");
    mvwaddstr(window, 0 + 37, 134, "*XXXX**********");
    mvwaddstr(window, 0 + 38, 134, "    XX*********");
    refresh();
}