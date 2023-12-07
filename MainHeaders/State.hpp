
#ifndef STATE_H
#define STATE_H

//#include "GameController.hpp"

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

#endif