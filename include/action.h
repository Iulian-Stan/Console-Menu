#include "menu.h"

#ifndef _ACTION_H
#define _ACTION_H

class Addition : public Action {
public:
    Addition(char *name);
    void executeAction();
};

class Substraction : public Action {
public:
    Substraction(char *name);
    void executeAction();
};

class Description : public Action {
public:
    Description(char *name);
    void executeAction();
};

#endif