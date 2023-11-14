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


void weapon::attack(dummy &dum){
int atk = trudmg();
dum.recvdmg(atk);



cout << "Damage:" << atk << "Dummy Health:" << dum.health << endl;

}






dummy::dummy(int hlth){
health = hlth;

}

void dummy::recvdmg(int atk){
health -= atk;
if(health < 0){
health = 0;
}


}



