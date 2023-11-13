#include <iostream>
#include <cstdlib>

struct dummy{
int health;

};

struct weapon{
int basedmg;
double crit;

weapon(int dmg, double crit);
int trudmg();
void attack();

};