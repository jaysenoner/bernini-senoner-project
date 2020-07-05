#ifndef THE_CASTLE_OF_DARKNESS_GAME_H
#define THE_CASTLE_OF_DARKNESS_GAME_H

#include <SFML/Graphics.hpp>
#include "Player.h"

class Game {

    //Private members
private:
    sf::RenderWindow * window;
    sf::Event eventListener;
    sf::VideoMode videoMode;
    Player player;

    //Private functions
private:
    void initWindow();
    void pollWindowEvents();



public:
    Game();
    virtual ~Game();
    bool isRunning();
    void update();
    void render();



};


#endif //THE_CASTLE_OF_DARKNESS_GAME_H
