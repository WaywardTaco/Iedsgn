
#include "ActionsHeader.hpp"

Action_MonsterAttack::Action_MonsterAttack(State* previousState) : Action(
    previousState,
    "A Monster Attacks",
    ""
) {

};

Action_MonsterAttack::~Action_MonsterAttack(){

};

void Action_MonsterAttack::stateRender(GameController* game){

};

void Action_MonsterAttack::stateLogic(GameController* game){
state_beginning:
    Action_CherubAttack* cherub = new Action_CherubAttack(this);
    Action_GroomAttack* groom = new Action_GroomAttack(this);
    Action_MassesAttack* masses = new Action_MassesAttack(this);
    Action_HuskAttack* husk = new Action_HuskAttack(this);
    Action_IndulgentAttack* indulgent = new Action_IndulgentAttack(this);
    Action_RingmasterAttack* ringmaster = new Action_RingmasterAttack(this);

    std::cout <<
        "Which Monster is Attacking?" << std::endl <<
        "[1] " << cherub->getName() << std::endl <<
        "[2] " << groom->getName() << std::endl <<
        "[3] " << masses->getName() << std::endl <<
        "[4] " << husk->getName() << std::endl <<
        "[5] " << indulgent->getName() << std::endl <<
        "[6] " << ringmaster->getName() << std::endl <<
        "[7] No More Monster Attacks" << std::endl <<
        "Choice: "
    ;

    int input; 
    if(!(std::cin >> input).good()){
        std::cin.ignore(); 
        std::cin.clear();
        goto state_beginning;
    }
    
    switch(input){
        case 1:
            game->setState(cherub);
            break;
        case 2:
            game->setState(groom);
            break;
        case 3:
            game->setState(masses);
            break;
        case 4:
            game->setState(husk);
            break;
        case 5:
            game->setState(indulgent);
            break;
        case 6:
            game->setState(ringmaster);
            break;
        case 7:
            game->setState(previousState);
            return;
    };

    goto state_beginning;
};

void Action_MonsterAttack::actionEffects(GameController* game){

};
