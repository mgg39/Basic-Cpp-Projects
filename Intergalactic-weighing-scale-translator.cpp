// Intergalactic weight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main() {
    //intro
    int type_of_weight;
    std::cout << "Welcome into our interplanetary weighting scale translator! \n Will you be measuring in kg or lbs today? If the answer is kg please type 1 if it's lbs please type 2.";
    std::cin >> type_of_weight;
    //if not kilos transfor to kg, if kg simply move on
    double weight;

    if (type_of_weight = 1) {
        //weight in kilos 
        std::cout << "Please enter the weight you want to measure in kg: ";
        std::cin >> weight;
    }
    else {
        double lb_weight;

        std::cout << "Please enter the weight you want to measure in lbs: ";
        std::cin >> lb_weight;

        //transform to kg
        weight = (lb_weight / 2) - (lb_weight / 10);

        //now just run the same stuff
    }
        //choose planets
    int n;
        std::cout << "We will ask you to insert the number of the planet you would like to weight the mass on. \n These are the currently available options: \n 1-Venus \n 2-Mars \n 3-Jupiter \n 4-Saturn \n 5-Uranus \n 6-Neptune \n\n Please now insert the number of your desired planet: ";
        std::cin >> n ;


        switch (n) {
            double new_weight;
        case 1:
            new_weight = weight * 0.78;
            std::cout << "The equivalent weight of " << weight << " in Venus is of " << new_weight << ".\n";
            break;
        case 2:
            new_weight = weight * 0.39;
            std::cout << "The equivalent weight of " << weight << " in Mars is of " << new_weight << ".\n";
            break;
        case 3:
            new_weight = weight * 2.65;
            std::cout << "The equivalent weight of " << weight << " in Jupiter is of " << new_weight << ".\n";
            break;
        case 4:
            new_weight = weight * 1.17;
            std::cout << "The equivalent weight of " << weight << " in Saturn is of " << new_weight << ".\n";
        case 5:
            new_weight = weight * 1.05;
            std::cout << "The equivalent weight of " << weight << " in Uranus is of " << new_weight << ".\n";
        case 6:
            new_weight = weight * 1.23;
            std::cout << "The equivalent weight of " << weight << " in Neptune is of " << new_weight << ".\n";
            break;
        default:
            std::cout << "Invalid planet number\n";
            break;
        }
}