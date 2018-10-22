#include "Game.h" 


using namespace std;
Game::Game()
{
    choice = 0;
    playing = true;
}


Game::~Game()
{

}

void Game::mainMenu()
{
    cout << "Welcome to ZORK." << endl;
    cout << endl << ">>";
    cin >> choice;

    


}