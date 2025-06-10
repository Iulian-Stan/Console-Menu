#include <iostream>
#include "global.h"
#include "menu.h"
#include "action.h"
using namespace std;

int main() {
    Menu *menu = new Menu("Main menu");

    Menu *submenuCalculator = new Menu("Calculator");
    menu->addItem(submenuCalculator);
    submenuCalculator->addItem(new Addition("'+'"));
    submenuCalculator->addItem(new Substraction("'-'"));

    menu->addItem(new Menu("Empty menu"));
    menu->addItem(new Description("About the program"));

    menu->execute();

    /** recursively deletes the menu tree */
    delete menu;

    cout << endl << endl << "The end." << endl;
    pause();
    return 0;
}
