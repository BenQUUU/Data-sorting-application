#include <iostream>
#include "../include/Menu.hpp"

/**
 * /author Michał Kolczak
*/


int main(){
    try{
        Menu menu;
        menu.menuInitialization();
    } catch(std::invalid_argument &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}