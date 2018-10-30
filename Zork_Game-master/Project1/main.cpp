#include <iostream>
#include "Game.h"


int main()
{
    srand(time(NULL));

    Game game;                      // <-- New game object


    while(game.getPlaying() == true){       // <-- Run game while session exists
        game.mainMenu();
        
/

    }    
    return 0;

}