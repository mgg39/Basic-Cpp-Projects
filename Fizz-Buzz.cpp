// Fizz_Buzz.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main() {

    // Brain explodes here:
    for (int i = 1; i <= 100; i++) {
        std::cout << i << "\n";
    }
   else if (i % 5 == 0) {
   std::cout << "Buzz\n";
    }
   else if (i % 3 == 0) {
   std::cout << "Fizz\n";
    }
   else {
   std::cout << i << "\n";
    }
    return 0;
}