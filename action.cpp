#include <iostream>
#include "global.h"
#include "action.h"
using namespace std;

/****** Addition class methods ******/

Addition::Addition(char *name) 
: Action(name) {}

void Addition::executeAction() {
	int a, b;
	cout << "Enter 2 numbers : ";
	cin >> a >> b;
	cout << "the summe = " << a + b << endl;
	pause();
}

/****** Substraction class methods ******/

Substraction::Substraction(char *name) : Action(name) {}

void Substraction::executeAction() {
	int a, b;
	cout << "Enter 2 numbers : ";
	cin >> a >> b;
	cout << "the difference = " << a - b << endl;
	pause();
}

/****** Description class methods ******/

Description::Description(char *name) : Action(name) {}

void Description::executeAction() {
	cout << "Polomorfism usage in a console menu application." << endl;
	cout << "Any time a new menu item can be added"
		<< " with sub items."
		<< " The changes to be done are : "
		<< " write the corresponding class for the items," 
		<< " add the items to the menu in the main function." 
		<< endl;
	pause();
}