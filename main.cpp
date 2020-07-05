#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Graph.h"
#include <ctime>
int main() {
    srand(time(NULL));
    Game game;


    while(game.isRunning())
    {
        game.update();
        game.render();
    }
}