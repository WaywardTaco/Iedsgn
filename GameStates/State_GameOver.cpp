
#include "StatesHeader.hpp"
#include <iostream>
#include<conio.h>

using namespace std;

enum State_GameOver::stateOptions : unsigned int {
    proceed
};

State_GameOver::State_GameOver(){};
State_GameOver::~State_GameOver(){};

void State_GameOver::stateLogic(GameController* game){
state_beginning:

    // Pass the winner to the game render
    stateRender(game);

    cout << "Press any key: ";
    int input = getch();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case proceed:
            game->setState(new State_AskReplay());
    }
    
};
