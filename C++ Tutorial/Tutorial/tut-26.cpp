#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <numeric>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// Warrior
class Warrior
{
private:
    int attkMax;
    int blockMax;

public:
    string name;
    int health;
    Warrior(string name, int health, int attkMax, int blockMax)
    {
        this->name = name;
        this->health = health;
        this->attkMax = attkMax;
        this->blockMax = blockMax;
    }

    int Attack()
    {
        return rand() % this->attkMax;
    }

    int Block()
    {
        return rand() % this->blockMax;
    }
};

class Battle
{
public:
    static void StartFight(Warrior &warrior1, Warrior &warrior2)
    {
        while (true)
        {
            if (Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0)
            {
                cout << "Game Over" << endl;
                break;
            }
            if (Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0)
            {
                cout << "Game Over" << endl;
                break;
            }
        }
    }

    static string GetAttackResult(Warrior &warriorA, Warrior &warriorB)
    {
        int warriorAAttackAmount = warriorA.Attack();
        int warriorBBlockAmount = warriorB.Block();
        int damageToWarriorB = ceil(warriorAAttackAmount - warriorBBlockAmount);
        damageToWarriorB = (damageToWarriorB < 0) ? 0 : damageToWarriorB;
        warriorB.health = warriorB.health - damageToWarriorB;

        printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damageToWarriorB);
        printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);

        if (warriorB.health <= 0)
        {
            printf("%s has Died and %s is Victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
            return "Game Over";
        }
        else
        {
            return "Fight Again";
        }
    }
};

int main()
{
    srand(time(NULL));
    Warrior thor("Thor", 100, 35, 15);
    Warrior hulk("Hulk", 150, 35, 10);

    Battle::StartFight(thor, hulk);

    return 0;
}