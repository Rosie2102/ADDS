#ifndef HUMAN_H
#define HUMAN_H
#include<string>
#include"Player.h"

class Human : public Player{
    public: 
        Human();
        Human(std::string name);
        char makeMove();
        std::string get_name();
        ~ Human();
    private:
        std::string humanName;
};
#endif  