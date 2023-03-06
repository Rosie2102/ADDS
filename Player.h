#ifndef PLAYER_H
#define PLAYER_H
#include <string> 

class Player{
    public:
        Player();
        virtual std::string get_name() = 0;
        virtual char makeMove() = 0;
        ~ Player();
    private:
        std::string PlayerName;
};
#endif