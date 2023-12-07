
#include "ActionsHeader.hpp"

Action_SecurityRoomAction::Action_SecurityRoomAction(State* previousState) : Action (
    new State_PatientTurn(), 
    "Security Room: Reveal (turn face up) a Monster", 
    "(You must be in the Security Room to use this Action)"
) {};

Action_SecurityRoomAction::~Action_SecurityRoomAction(){};

void Action_SecurityRoomAction::actionEffects(GameController* game){
    //Empty on Purpose

    
    game->getTurnPatient()->setDoneAction(true);
};
