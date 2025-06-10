# Polymorphism

Simple demonstration of [Polymorphism](https://en.wikipedia.org/wiki/Polymorphism_(computer_science)) in C++.

The concept is demonstrated using interactive console application that offers multiple menu options. Each option leads to another menu or performs an action, depending on user selection.

Running the example with CMake:

1. Create a build folder
    ```
    mkdir build && cd build
    ```

2. Generate the project
    ```
    cmake ..
    ```

3. Build the project
    ```
    cmake --build .
    ```

4. Run the generated example
    ```
    > MENU.exe
    Main menu:

            1 - Calculator

            2 - Empty menu

            3 - About the program

            ESC or 0 - Quit

    Enter a command index :
    ```