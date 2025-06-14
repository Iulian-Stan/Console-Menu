#ifndef _MENU_H
#define _MENU_H

/**
 * Generic menu item, can be an action as well as another menu item
 */
class MenuItem {
private:
    char *name;
    MenuItem *parent;
    void printHelper();

protected:
    MenuItem(char *name);
    virtual ~MenuItem();
    /** print item title alongside its parents */
    void printTitle();

public:
    char *getName();
    /** the logic behind menu item */
    virtual void execute() = 0;
    /** is necessary to set the parent from inside Menu class */
    friend class Menu;
};

/**
 * Menu item that executes an action
 * Is a leaf node in Menu tree
 */
class Action : public MenuItem {
protected:
    Action(char *name);
    /** core logic **/
    virtual void executeAction() = 0;

public:
    /** behaviour */
    void execute();
};

/**
 * Menu item can be as well an independent Menu
 */
class Menu : public MenuItem {
private:
    static const int maxSize = 9;
    int size;
    /** Menu stores its childs to free the memory */
    MenuItem **items;
    void print();
    /** return selected menu item index, otherwise -1 to quit */
    int readCommandIndex();

public:
    Menu(char *name);
    ~Menu();

    void addItem(MenuItem *item);
    void execute();
};

#endif