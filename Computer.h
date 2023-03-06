#ifndef COMPUTER_H
#define COMPUTER_H
#include"Player.h"

class Computer : public Player{
    public: 
        Computer();
        std::string get_name();
        char makeMove();
        ~Computer();
};
#endif