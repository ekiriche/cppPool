#include "Engine.hpp"
#include <ctime>

int main(void) {
    srand(clock());
    Engine *engine = new Engine();
    engine->BeginGame();
    return (0);
}
