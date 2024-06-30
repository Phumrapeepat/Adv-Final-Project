#ifndef combat.h
#define combat.h
#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

class monster{
private:
    string name;
    int hp,atk,def,sta,spd,lvl;
public:
    void statt();
    void nattack(monster &);
    void heal();
    bool alive();
    monster(string,int = 20,int = 1,int = 1,sta=10,spd=1,lvl=1);
    ~monster();
};
