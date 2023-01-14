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

void Animal::setAll(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
}

Animal::Animal(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal()
{
    this->name = "";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal()
{
    cout << "Animal " << this->name << " Destroyed" << endl;
}

void Animal::ToString()
{
    cout << this->name << " is " << this->height << " is cm tall and " << this->weight << " kg in weight." << endl;
}

class Dog : public Animal
{
private:
    string sound = "Wooof";

public:
    void MakeSound()
    {
        cout << "The dog " << this->GetName() << " says " << this->sound << endl;
    }

    Dog(string, double, double, string);
    Dog() : Animal(){};
    void ToString();
};

Dog::Dog(string name, double height, double weight, string sound) : Animal(name, height, weight)
{
    this->sound = sound;
}

void Dog::ToString()
{
    cout << this->GetName() << " is " << this->GetHeight() << " cms tall, " << this->GetWeight() << " kg in weight and says " << this->sound << endl;
}

int main()
{
    Animal fred;
    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("Fred");
    fred.ToString();

    fred.setAll("Fred", 34, 12);
    fred.ToString();

    Animal tom("Tom", 36, 15);
    tom.ToString();

    Dog spot("Spot", 38, 16, "Woooooof");
    spot.ToString();

    cout << "Number of Animals: " << Animal::GetNumberOfAnimals() << endl;
    return 0;
}