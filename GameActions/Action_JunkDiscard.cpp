
#include "ActionsHeader.hpp"

Action_JunkDiscard::Action_JunkDiscard(State* previousState) : Action (
    new State_PatientTurn(), 
    "Use [ONE JUNK] to discard the top card of the deck", 
    ""
) {};

Action_JunkDiscard::~Action_JunkDiscard(){};

void Action_JunkDiscard::actionEffects(GameController* game){
    //Empty on Purpose
};
