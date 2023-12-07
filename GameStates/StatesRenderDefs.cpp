
#include "StatesHeader.hpp"
#include <iostream>

using namespace std;

void State_MainMenu::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __" << endl
        << " _                           " << endl
        << "|_)  _      _ |_   _   _ o  _ " << endl
        << "|   _> \/ (_ | | (_) _> | _> " << endl
        << "       /                     " << endl  
        << "__ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "[1] Start a game" << endl
        << "[2] See Instructions" << endl
        << "[3] Exit" << endl
        << "Enter your choice: "
    ;
};

void State_ShowingInstructions::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "___                                       " << endl
        << " |  ._   _ _|_ ._      _ _|_ o  _  ._   _ " << endl
        << "_|_ | | _>  |_ |  |_| (_  |_ | (_) | | _> " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "[1] Back to Main Menu" << endl
        << "[2] Show Detailed Instructions" << endl
        << "Enter your choice: "
        ;
    //cout << "Showing Instructions:" << endl;
};

void State_ShowingDetailedInstructions::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                            ___                                       " << endl
        << "| \  _  _|_  _. o |  _   _|    |  ._   _ _|_ ._      _ _|_ o  _  ._   _ " << endl
        << "|_/ (/_  |_ (_| | | (/_ (_|   _|_ | | _>  |_ |  |_| (_  |_ | (_) | | _> " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "[1] Back to Main Menu" << endl
        << "Enter your choice: "
        ;
    //cout << "Showing Detailed Instructions:" << endl;
};

void State_ExitingApp::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                                                            " << endl
        << "|_    o _|_ o ._   _     /\  ._  ._  | o  _  _. _|_ o  _  ._  " << endl
        << "|_ >< |  |_ | | | (_|   /--\ |_) |_) | | (_ (_|  |_ | (_) | | " << endl
        << "                   _|        |   |                            " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Exiting Application..." << endl;
};

void State_NamingDirector::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "                            _                         " << endl
        << "|\ |  _. ._ _  o ._   _    | \ o ._  _   _ _|_  _  ._ " << endl
        << "| \| (_| | | | | | | (_|   |_/ | |  (/_ (_  |_ (_) |  " << endl
        << "                      _|                              " << endl           
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "Director's Name: "
        ;
    //cout << "Naming Director:" << endl;
};

void State_SummoningMonster::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " __                                                                " << endl
        << "(_      ._ _  ._ _   _  ._  o ._   _    |\/|  _  ._   _ _|_  _  ._ " << endl
        << "__) |_| | | | | | | (_) | | | | | (_|   |  | (_) | | _>  |_ (/_ |  " << endl
        << "                                   _|                              " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "Enter 1 to Proceed: "
        ;
    //cout << "Summoning Monster:" << endl;

};

void State_CountingPlayers::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "_                              _" << endl
        << "/   _      ._  _|_ o ._   _    |_) |  _.     _  ._  _ " << endl
        << "\_ (_) |_| | |  |_ | | | (_|   |   | (_| \/ (/_ |  _> " << endl
        << "                          _|             /            " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Counting Players:" << endl;
};

void State_ChoosingCharacters::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                             _                                 " << endl
        << "/  |_   _   _   _ o ._   _    /  |_   _. ._  _.  _ _|_  _  ._  _ " << endl
        << "\_ | | (_) (_) _> | | | (_|   \_ | | (_| |  (_| (_  |_ (/_ |  _> " << endl
        << "                         _|                                      " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "Enter the number of players: "
        ;
    //cout << "Choosing Characters:" << endl;

};

void State_DealingCards::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                         _               " << endl
        << "| \  _   _. | o ._   _    /   _. ._  _|  _ " << endl
        << "|_/ (/_ (_| | | | | (_|   \_ (_| |  (_| _> " << endl
        << "                     _|                    " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "[1] Start Game" << endl
        << "[0] Cancel Setup" << endl
        << "Enter your choice: "
        ;
    //cout << "Dealing Cards:" << endl;
};

void State_PatientTurn::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                               ___            " << endl
        << "|_)  _. _|_ o  _  ._  _|_ /  _    |      ._ ._  " << endl
        << "|   (_|  |_ | (/_ | |  |_   _>    |  |_| |  | | " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << game->getTurnPatient()->getName() << "'s turn!" << endl
        << "Character: " << game->getTurnPatient()->getCharacter()->getName() << endl
        << "Burden: " << game->getTurnPatient()->getBurden() << endl
        << "[1] Use Character Action" << endl
        << "[2] Use Room Action" << endl
        << "[3] Use Resource" << endl
        << "[4] Move" << endl
        << "[5] End Turn" << endl
        << "Enter your choice: "
        ;
    //cout << "Patient's Turn:" << endl;

};

void State_ResolvingDilemmas::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                               _                             " << endl
        << "|_)  _   _  _  |    o ._   _    | \ o |  _  ._ _  ._ _   _.  _ " << endl
        << "| \ (/_ _> (_) | \/ | | | (_|   |_/ | | (/_ | | | | | | (_| _> " << endl
        << "                           _|                                  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Resolving Dilemmas: " << endl;

};

void State_DirectorTurn::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                                ___            " << endl
        << "| \ o ._  _   _ _|_  _  ._ /  _    |      ._ ._  " << endl
        << "|_/ | |  (/_ (_  |_ (_) |    _>    |  |_| |  | | " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "[1] Summon Monster" << endl
        << "[2] Recover Dilemma" << endl
        << "[3] Move Monster" << endl
        << "[4] End Turn" << endl
        << "Enter your choice: "
        ;
    //cout << "Director's Turn:" << endl;
};

void State_HungerPangs::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "                          _                 " << endl
        << "|_|     ._   _   _  ._   |_)  _. ._   _   _ " << endl
        << "| | |_| | | (_| (/_ |    |   (_| | | (_| _> " << endl
        << "             _|                       _|    " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Hunger Pangs:" << endl;
};

void State_RoundEnd::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _            _    _    _                  " << endl
        << "|_ ._   _|   / \ _|_   |_)  _      ._   _| " << endl
        << "|_ | | (_|   \_/  |    | \ (_) |_| | | (_| " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "End Of Round:" << endl;
};

void State_GameOver::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " __                  _            " << endl
        << "/__  _. ._ _   _    / \     _  ._ " << endl
        << "\_| (_| | | | (/_   \_/ \/ (/_ |  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Game Over" << endl;
};

void State_AskReplay::stateRender(GameController* game){
    //system("CLS");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "             ___        _                   " << endl
        << " /\   _ |     |   _    |_)  _  ._  |  _.    " << endl
        << "/--\ _> |<    |  (_)   | \ (/_ |_) | (_| \/ " << endl
        << "                               |         /  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        << "Replay? [0 - No | 1 - Yes]:"
        ;
    //cout << "Ask to Replay:" << endl;
};
