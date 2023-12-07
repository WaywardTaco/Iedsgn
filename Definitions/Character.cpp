
#include "../MainHeaders/Character.hpp"

Character::Character(
    std::string name,
    Action* ability
) {
    this->characterName = name;
    this->characterAbility = ability;
};

std::string Character::getName(){
    return this->characterName;
};

State* Character::getAbility(){
    return this->characterAbility;
};