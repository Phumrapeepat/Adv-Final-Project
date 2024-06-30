#ifndef combat.h
#define combat.h
#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

class monster{
private:
    string name;
    int hp,atk,def,sta,spd,lvl=1;
public:
    void statt();
    void nattack(monster &);
    void sattack(monster &);
    void heal();
    bool alive();
    monster(string,int = 20,int = 1,int = 1,sta=10,spd=1;
    ~monster();
};
srand(time(NULL);)
monster::monster (string n, int h, int a, int d,int st, int sp)
{
    name=n;
    hp=h;
    atk=a;
    def=d;
    sta=st
    spd=sp;
    cout<<name<<" is a monster"<<endl;
}
void monster::statt(){
    cout<<"Name: "<<name<<endl;
    cout<<"Level: "<<lvl<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"Stamina: "<<sta<<endl;
    cout<<"Speed: "<<spd<<endl;
    cout<<"Attack: "<<atk<<endl;
    cout<<"Defense: "<<def<<endl;
}

void monster::nattack(monster &x){
x.hp-=
}