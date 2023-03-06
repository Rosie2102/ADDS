#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main(){

    Human humanPlayer("Mei");
    Computer computerPlayer;
    Referee referee;
    Player* win = referee.refGame(&humanPlayer,&computerPlayer);
    if (win == nullptr){
        cout<<"It's a Tie" << endl;

    }else{
        cout<<win->get_name()<<"Wins. "<<endl;
        
    }
    return 0;
}
