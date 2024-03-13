#ifndef MENU_HPP
#define MENU_HPP

#include <chrono>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Menu {
public:
    void menuInitialization();

private:
    size_t askForVectorSize_();
};

#endif