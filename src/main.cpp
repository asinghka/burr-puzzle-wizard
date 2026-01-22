#include "application.h"
#include "puzzles/puzzle_18.h"

// Function signature and explicit return value is needed as main() is remapped to SDL_main
int main(int argc, char** argv) {

    Application app;

    app.init_wizard(puzzle_18);
    app.run();

    return 0;
}