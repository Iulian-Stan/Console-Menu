#include <iostream>
#include "global.h"
#include "action.h"
using namespace std;

/****** Addition class methods ******/

Addition::Addition(char *name) : Action(name) {}

void Addition::executeAction() {
    int a, b;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    cout << "the sum = " << a + b << endl;
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
    cout << "Polymorphism usage in a console menu application." << endl;
    cout << "Any time a new menu item can be added with sub items." << endl;
    cout << "To extend this example:" << endl;
    cout << "  1. Add new class that extends `Menu` or `MenuItem`" << endl;
    cout << "  2. Initialize the new class and add it to the menu using `addItem`" << endl;
    pause();
}