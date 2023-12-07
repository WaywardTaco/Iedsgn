

#include "StatesHeader.hpp"

enum State_ResolvingDilemmas::stateOptions : unsigned int {
    finished_resolving
};

State_ResolvingDilemmas::State_ResolvingDilemmas(){};
State_ResolvingDilemmas::~State_ResolvingDilemmas(){};

void State_ResolvingDilemmas::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    Action_Dilemma_DiscardAll* discardOne = new Action_Dilemma_DiscardAll(this);
    Action_Dilemma_ExtraDamage* extraDmg = new Action_Dilemma_ExtraDamage(this);
    Action_Dilemma_Hunger* hunger = new Action_Dilemma_Hunger(this);
    Action_Dilemma_PainSplit* painSplit = new Action_Dilemma_PainSplit(this);
    Action_Dilemma_SummonMonster* summon = new Action_Dilemma_SummonMonster(this);

    std::cout <<
        "[1] " << discardOne->getName() << std::endl << 
        "[2] " << extraDmg->getName() << std::endl << 
        "[3] " << hunger->getName() << std::endl << 
        "[4] " << painSplit->getName() << std::endl << 
        "[5] " << summon->getName() << std::endl << 
        "[6] No More Dilemmas to Resolve" << std::endl <<
        "Resolve a Dilemma: "
    ;

    int input; 
    if(!(std::cin >> input).good()){
        std::cin.ignore(); 
        std::cin.clear();
        goto state_beginning;
    }

    for (int i = 0; i < game->getPatientCount(); i++){
        game->getPatient(i)->setDoneAction(false);
    }
    
    switch(input){
        case 1:
            game->setState(discardOne);
            break;
        case 2:
            game->setState(extraDmg);
            break;
        case 3:
            game->setState(hunger);
            break;
        case 4:
            game->setState(painSplit);
            break;
        case 5:
            game->setState(summon);
            break;
        case 6:
            game->setState(new State_DirectorTurn());
            break;
    };
    
};