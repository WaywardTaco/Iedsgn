
#include "StatesHeader.hpp"
#include "../GameActions/ActionsHeader.hpp"
#include "../MainHeaders/Character.hpp"
#include <iostream>

enum State_PatientTurn::stateOptions : unsigned int {
    filler, take_character_action = 1, take_room_action = 2, take_resource_action = 3, move = 4, end_turn = 5 
};

State_PatientTurn::State_PatientTurn(){

};

State_PatientTurn::~State_PatientTurn(){};

void State_PatientTurn::stateLogic(GameController* game){
state_beginning:
    Patient* owner = game->getTurnPatient();
    Action_ExtraAction extra(this);

    if(!owner->isAlive()){
        game->nextTurn();
        return;
    }


    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    // Process patient actions
    switch(choice){
        case take_character_action:
            if(owner->hasDoneAction()){
                extra.actionEffects(game);
            }
            game->setState(owner->getCharacter()->getAbility());
            break;

        case take_room_action:
            if(owner->hasDoneAction()){
                extra.actionEffects(game);
            }
            game->setState(new Action_DoRoomAction(this));
            break;

        case take_resource_action:
            game->setState(new Action_DoResourceAction(this));
            break;

        case move:
            game->setState(new Action_MovePatient(this));
            break;

        case end_turn:
            game->setState(new Action_DrawCard(this));
            game->runState();
            game->nextTurn();
            break;
    }

};
