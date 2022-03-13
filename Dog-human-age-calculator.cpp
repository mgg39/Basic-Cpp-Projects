// Dog age calculator C++.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
//Dogs age differently from humans.It is a common misconception that a dog year equals seven human years. \n Nevertheless it isn't that simple, the first couple of years in a dogs life count for 21 human years and every year after counts for 4. This code will enable you to calculate your dog's current age.

int main() {
    //intro
    // int my dogs age
    int dog_age = 0;
    std::cout << "Dogs age differently from humans.It is a common misconception that a dog year equals seven human years. \n Nevertheless it isn't that simple, the first couple of years in a dogs life count for 21 human years and every year after counts for 4. This code will enable you to calculate your dog's current human age. \n For a start, please insert your dogs age: ";
    std::cin >> dog_age;
    double human_years;
    //dogs over the age of 2
    if (dog_age >= 2) {
        int early_years;
        double later_years;
        //giving variable value of 21 - rep 2 first years
        early_years = 21;
        later_years = (dog_age - 2) * 4;
        // adding both "types" of year translation
        human_years = early_years + later_years;

    }
    else {
        human_years = (21 / 2) * dog_age; 
    }
    //optional inner step:
    //std::cout << "Calculating your  " << dog_age << " year's old dog's age in human years. \n";
    std::cout << "Your dog is " << human_years << " human years old. \n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu