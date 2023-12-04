#ifndef FOOD_H
#define FOOD_H

#include "objPos.h"
#include "Player.h" // Include this if it's not already included elsewhere
#include "objPosArrayList.h"

class Food
{
private:
    objPos foodPos;
    char symbol; // New member variable
    int score; // New member variable
    int lengthEffect; // New member variable
    enum FoodType { NORMAL, SPECIAL }; // New enum for food type
    FoodType type; // New member variable

public:
    Food(char symbol, int score, int lengthEffect); // New constructor
    ~Food();

    void generateFood(objPos blockOff);
    void getFoodPos(objPos &returnPos);
    int getScore(); // New getter method
    int getLengthEffect(); // New getter method
    void effectflag();
};

#endif