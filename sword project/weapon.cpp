#include <iostream>
#include <cstdlib>
using namespace std;
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

void weapon::test(){

cout << "Damage:" << trudmg() << endl;   
}


void weapon::attack(dummy dum){
int atk = trudmg();
dum.health -= atk;
if(dum.health < 0){
    dum.health = 0;
}

cout << "Damage:" << atk << "Dummy Health:" << dum.health << endl;

}






dummy::dummy(int hlth){
health = hlth;

}


void dummy::check(){

cout << "Health:" << health;

}


int main(){
weapon s(20, 0.3);

dummy dum(40);

s.test();

dum.check();

s.attack(dum);

dum.check();

}