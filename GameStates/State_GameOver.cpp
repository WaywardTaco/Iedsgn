
#include "StatesHeader.hpp"
#include <iostream>
#include<conio.h>

enum State_GameOver::stateOptions : unsigned int {
    proceed
};

State_GameOver::State_GameOver(){};
State_GameOver::~State_GameOver(){};

void State_GameOver::stateLogic(GameController* game){
state_beginning:

    // Pass the winner to the game render
    stateRender(game);

    char input; 
    std::cout << "Press any key: "; input = _getch();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case proceed:
            game->setState(new State_AskReplay());
    }
    
};
