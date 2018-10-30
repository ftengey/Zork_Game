#include "Game.h" 


using namespace std;
Game::Game()
{
    choice = "default";
    playing = true;
}


Game::~Game()
{

}

void Game::mainMenu()
{
    cout << "Welcome to ZORK." << endl;
    cout << endl << ">>";
    getline(cin, choice);


    if (choice == "n"){
        cout << "move to new room north" << endl;
    }
    else if (choice == "s"){
        cout << "move to new room south" << endl;
    }
    else if (choice == "e"){
        cout << "move to new room east" << endl;
    }
    else if (choice == "w"){
        cout << "move to new room west" << endl;
    }
    else if (choice == "i"){
        cout << "move to new room west" << endl;
    }
    else if (choice == "take (ITEM)"){                       //   <--- create ITEM
        cout << "move to new room west" << endl;
    }        

    }   else{
        cout << "nothing reasonable was input" << endl;
    }




    // switch (choice)
    // {
    //     case '0': 
    //         playing = false;
    //         break;     
    //     case 'n':
    //         //Move player to different room
    //     case 's':
    //     case 'e':
    //     case 'w':



    //     case 'i':
    //         //do sth
    //     case 'take (iterm)':
    //         //do sth        
    //     case 'open (container)':
    //     case 'open exit':
    //         //do sth
    //     case 'read (item)':
    //         //do sth
    //     case 'drop (item)':
    //         //do sth
    //     case 'put (item) in (container)':
    //         //do sth
    //     case 'turn on (item)':
    //         //do sth
    //     case 'attack (creature) with (item)':
    //         //do sth
    //     default:
    //         cout << "I didn't quite get that" << endl;
    //
    // }


    


    


}