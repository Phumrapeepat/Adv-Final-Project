
#define combat_h
#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>
class monster{
private:
    string name;
    int hp,atk,def,sta,spd,lvl=1,exp=0,upoint;
public:
    void statt();
    void upgrade();
    void level();
    void nattack(monster &);
    void sattack(monster &);
    void heal();
    bool alive();
    monster(string,int = 20,int = 1,int = 1,int=10,int=1);
    ~monster();
};

monster::monster (string n, int h, int a, int d,int st, int sp)
{
    name=n;
    hp=h;
    atk=a;
    def=d;
    sta=st;
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
void monster::level(){
    int l=lvl,req=250;
    while(exp>=(req*lvl))
    lvl++;
upoint+=(lvl-l)*3;
}
void monster::upgrade(){
    if(upoint<=0){
        cout<<"You don't have any upgrade point!!"<<endl;
    }
    else {
        while(upoint>0){
            cout<<"Upgrade Point: "<<upoint<<endl;
            cout<<"Stats lists:"<<endl;
            cout<<"1.HP: "<<hp<<endl;
            cout<<"2.Stamina: "<<sta<<endl;
            cout<<"3.Speed: "<<spd<<endl;
            cout<<"4.Attack: "<<atk<<endl;
            cout<<"5.Defense: "<<def<<endl;
            cout<<"Choose stats to upgrade: ";
        }
    }
}
void monster::nattack(monster &x){
x.hp-=atk;
}
monster::~monster()
{
    cout<<name<<" is dead."<<endl;
}