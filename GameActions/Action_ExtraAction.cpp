
#include "ActionsHeader.hpp"

Action_ExtraAction::Action_ExtraAction(State* previousState) : Action (
    previousState, 
    "Take an Extra Action!", 
    "You can take an extra action at the cost of one (1) Burden!"
) {};

Action_ExtraAction::~Action_ExtraAction(){};

void Action_ExtraAction::actionEffects(GameController* game){
    Patient* target = game->getTurnPatient();

    target->giveBurden(1);
};
