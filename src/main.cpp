/*
 * UI branch giu diem vao chuong trinh gon nhe de chay giao dien game.
 */
#include "GameLoop.h"

#include <exception>
#include <iostream>

int main() {
    try {
        GameLoop game;
        game.run();
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "Fatal error: " << error.what() << '\n';
        return 1;
    }
}
