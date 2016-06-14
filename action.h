#include "menu.h"

#ifndef _action_
#define _action_

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
	Description(char *nume);
	void executeAction();
};

#endif