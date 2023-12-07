

#include "StatesHeader.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

enum State_HungerPangs::stateOptions : unsigned int {
    eating_skipped = 0, player_fed = 1,
};

State_HungerPangs::State_HungerPangs(){};
State_HungerPangs::~State_HungerPangs(){};

void State_HungerPangs::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    unsigned int numPatient = game->getPatientCount();
    // Process eating per player, deal burden accordingly

    for(int i = 0; i < numPatient; i++) {
        int input; 
        
        cout << endl << "Patient " << i + 1 << endl
            << "Can you Eat?"
            << "[1 - Yes | 0 - No]: " << endl;

        cin >> input; 
 
        stateOptions
            choice = static_cast<stateOptions>(input);
    
        switch(choice){
            case player_fed:
                break;
            case eating_skipped:
                game->getPatient(i)->giveBurden(1);
                break;
        }
    }

    game->setState(new State_RoundEnd());
};
