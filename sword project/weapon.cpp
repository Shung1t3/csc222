#include <iostream>
#include <cstdlib>
#include "sword.h"

weapon::weapon(int dmg, double critc){
basedmg = dmg;
crit = critc;
}

int weapon::trudmg(){
double calculation = (rand() % 100) / 100;

if (calculation < crit){

return basedmg * 2;

}else {
return basedmg;    
}

}









dummy::dummy(int hlth){
health = hlth;

}