#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI{
    public :
        //Default Constructor
        BMI();

        //Overloaded Constructor
        BMI(string, int, double);

        //Destructor
        ~BMI();

        //Accessor Function
        string getName() const;
        int getHeight() const;
        double getWeight() const;

        /*BMI(string name, int height, double weight){
            newName = name;
            newHeight = height;
            newWeight = weight;
        }
        double calculate(){
            return newWeight / (newHeight*newHeight);
        }*/

    private :
        string newName;
        int newHeight;
        double newWeight;
};

#endif