#include <iostream>
#include <cstdlib>

struct dummy{
int health;

dummy(int health);
void check();
void recvdmg(int atk);
};

struct weapon{
int basedmg;
double crit;

weapon(int dmg, double crit);
int trudmg();
void test();
void attack(dummy &dummy);


};

