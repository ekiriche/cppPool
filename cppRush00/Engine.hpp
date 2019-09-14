#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <unistd.h>
#include <iostream>
#include <ncurses.h>
#include <curses.h>

#include "AsciiPictures.hpp"
#include "BasicCharacter.hpp"

class Engine {
public:
    Engine(void);
    ~Engine(void);
    Engine(const Engine &engine);
    Engine &operator=(Engine const &engine);
    void BeginGame(void);

protected:
    int width;
    int height;
    int maxHeight;
    int maxWidth;
    WINDOW* mainWindow;
    WINDOW* intefaceWindow;
    WINDOW* background;

    void getScreenSize(void);
    WINDOW* setWindow(int nlines, int ncols, int y0, int x0);
};

#endif //ENGINE_HPP