
#pragma once
#include "StatesHeader.hpp"
#include<iostream>
#include<stdlib.h> /*system("CLS");*/
#include<conio.h> /*_getch();*/
#include<vector>

#include "../MainHeaders/Character.hpp"

using namespace std;

enum State_ChoosingCharacters::stateOptions : unsigned int {
    
};

State_ChoosingCharacters::State_ChoosingCharacters(){};
State_ChoosingCharacters::~State_ChoosingCharacters(){};

void State_ChoosingCharacters::stateLogic(GameController* game){
state_beginning:

vector<Character*> charac;

Action* ability = new Action_DebtCollectorsAbility(game->getCurrentState());
Character* character = new Character("Debt Collector", ability);
charac.push_back(character);

ability = new Action_FathersAbility(game->getCurrentState());
character = new Character("Father", ability);
charac.push_back(character);

ability = new Action_JournalistsAbility(game->getCurrentState());
character = new Character("Journalist", ability);
charac.push_back(character);

ability = new Action_PastorsAbility(game->getCurrentState());
character = new Character("Pastor", ability);
charac.push_back(character);

ability = new Action_StudentsAbility(game->getCurrentState());
character = new Character("Student", ability);
charac.push_back(character);

ability = new Action_VeteransAbility(game->getCurrentState());
character = new Character("Veteran", ability);
charac.push_back(character);

char input;
string name;
int i, j;
unsigned int numPatient = game->getPatientCount();

stateRender(game);

int numCharacters = 0;
for (i = 0; i < numPatient; i++) {
	j = -1;
	numCharacters = (int) charac.size();

	cout << "Enter Patient " << i + 1 << "'s name: "; cin >> name;
	cout << endl;

	do {
		if (j == numCharacters - 1) j = 0;
		else j++;

		//system("CLS");

		cout << endl << "Patient " << i + 1 << endl;
		cout << "Play as the " << charac[j]->getName() << "?" << endl;
		cout << "(Press q to select, otherwise press any key)" << endl;
		input = _getch();
		cout << endl;

	} while (input != 'q' && input != 'Q');

	Patient* patient = new Patient(name, charac[j]);
	game->pushPatient(patient);

	charac.erase(charac.begin() + j);
}

    game->setState(new State_DealingCards());
};
