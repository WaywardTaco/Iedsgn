
#ifndef STATE_H
#define STATE_H

class GameController;

class State {
protected:
    enum stateOptions : unsigned int;
public: 
    State();
    ~State();
    virtual void stateLogic(GameController* game) = 0;
    virtual void stateRender(GameController* game) = 0;
};

#include "GameController.hpp"

#endif