#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secret = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;