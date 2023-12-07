
#include "ActionsHeader.hpp"

Action_MassesAttack::Action_MassesAttack(State* previousState) : Action (
    previousState, 
    "The Masses Attack!", 
    "Grasping at the limelight of the proud, the victims of the Masses receive Burden and skip their next Normal Action"
) {};

Action_MassesAttack::~Action_MassesAttack(){};

void Action_MassesAttack::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage());
    victim->setDoneAction(true);
    
};
