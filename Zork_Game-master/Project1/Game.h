//The game.h file was made to manage the options within the game

//Game will be a hub for other code to imolement


//You use playinh to determine whether the user is still playing the game



#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

class Game
{
    public:
        Game();
        virtual ~Game();
        void mainMenu();
    //operators 

    //functions
       inline bool getPlaying() { return this->playing; }

    private:

        std::string choice;         // <-- Remember to change choice to a string var
        bool playing;

    

};