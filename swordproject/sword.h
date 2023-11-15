#include <iostream>
#include <cstdlib>

struct dummy{
int health;

dummy(int health);
void recvdmg(int atk);
};

struct weapon{
int basedmg;
double crit;

weapon(int dmg, double crit);
void to_string();
int trudmg();
void test();
void attack(dummy &dummy);


};

