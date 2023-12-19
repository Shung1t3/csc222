#include <iostream>
#include <cstdlib>
using namespace std;
#include "sword.h"

Sword::Sword(){
    basedmg = 0;

}

Sword::Sword(int dmg){
    basedmg = dmg;

}
string Sword::to_string(){

    return std::to_string(basedmg);
}



int Sword::damage(){

    return basedmg;   
}


int Sword::armor_damage(int a){
    int atk = basedmg;
    int armdmg = basedmg/a;

    return armdmg;
}













