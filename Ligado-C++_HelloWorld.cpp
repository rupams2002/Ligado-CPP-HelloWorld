// ********************************************************************
//  DEVELOPER    : MOHAMMED HASAN
//  DATE         : 05 DECEMBER 2024
//  DESCRIPTION  : Welcome to Ligado - C++ Application
//  VERSION      : 1.0.0
// ********************************************************************

#include <iostream>
#include <thread>
#include <chrono>

int main() {
    while (true) {
        std::cout << "Welcome to Ligado - C++ Application Version 1.0.0\n" << std::endl;
        std::this_thread::sleep_for(std::chrono::minutes(1));
    }
    return 0;
}
