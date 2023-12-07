
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.hpp"

class Player {
private:
    std::string playerName;
    
public:
    Player(
        std::string name
    );
    ~Player();

    std::string getName();
};

#endif