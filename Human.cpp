#include "Human.h"
#include<iostream>

using namespace std;
Human::Human()
{
    name = "Human";
}
Human::Human(string name){
    humanName = name; 
}
char Human::makeMove()
{
    char humanMove;
    cout<<"Please enter your move: ";
    cin>>humanMove;
    return humanMove;  
}

string Human::get_name()
{
    return humanName;
}
Human::~ Human()
{

}