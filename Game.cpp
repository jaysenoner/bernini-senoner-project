#include "Game.h"

//Constructors and Destructors
Game::~Game() {
    delete window;
}

Game::Game() {
    initWindow();

}


//Init and private Functions
void Game::initWindow() {
    videoMode.height = 1200;
    videoMode.width = 1800;
    window = new sf::RenderWindow(videoMode,"The castle of darkness",sf::Style::Titlebar|sf::Style::Close);

}

void Game::pollWindowEvents() {
    while(window->pollEvent(eventListener))
    {
        switch(eventListener.type)
        {
            case sf::Event::Closed:
                window->close();
                break;
        }
    }

}


//Public Functions
bool Game::isRunning() {
    return window->isOpen();
}

void Game::update() {
    pollWindowEvents();

}

void Game::render() {

    window->clear();
    //Draw game objects

    window->display();

}

