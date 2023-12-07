
#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include "Player.hpp"
#include "Character.hpp"

class Patient : public Player {
private:
    Character* chosenCharacter;
    unsigned int burdenCount;
    bool isDead, hasTakenAction;
    
public:
    Patient(
        std::string name,
        Character* character
    );
    ~Patient();

    void giveBurden(unsigned int amount);
    void healBurden(unsigned int amount);
    void revive(unsigned int toBurdenAmt);

    void setDoneAction(bool state);

    Character* getCharacter();
    bool isAlive();
    bool hasDoneAction();
    unsigned int getBurden();
};

#endif