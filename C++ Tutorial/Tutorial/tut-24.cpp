#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// Dog
// Attributes: Height, Weight, Color, Food
// Capabilities: Run, Walk, Eat

class Animal
{
private:
    string name;
    double height;
    double weight;

    static int numOfAnimals;

public:
    // Getter -> It gets the value from the variable
    string GetName() { return name; }
    // Setter
    void SetName(string name) { this->name = name; }
    double GetHeight() { return height; }
    void SetHeight(double height) { this->height = height; }
    double GetWeight() { return weight; }
    void SetWeight(double weight) { this->weight = weight; }

    void setAll(string, double, double);

    // Constructor
    Animal(string, double, double);
    Animal();

    // Destructor
    ~Animal();

    static int GetNumberOfAnimals() { return numOfAnimals; }

    void ToString();
};

int Animal::numOfAnimals = 0;

int main()
{

    return 0;
}