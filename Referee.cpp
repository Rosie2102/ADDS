#include "Referee.h"

Referee::Referee()
{

}
Player* Referee::refGame(Player* player1,Player* player2)
{
    char humanMove = player1->makeMove();
    char computerMove = player2->makeMove();

    if (humanMove == computerMove){
            return nullptr;
        }
        else if (humanMove == 'R' && computerMove == 'S'){
            return player1;
        }
        else if (humanMove == 'S' && computerMove == 'P'){
            return player1;
        }
        else if (humanMove == 'P' && computerMove == 'R'){
            return player1;
        }else{
            return player2;
        }
}
        
    