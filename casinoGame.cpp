//Written by Kanayo Emenike

/*
    Description: 
            This application is a terminal based application where
        The Player attemps to guess the next number the machine will
        create. The numbers are between 1 and 100. Good luck to the
        player!

    Currently Working on: 

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Functions

//Classes
class Player {
    private:
        string playerName;
        double playerBalance;

    public:

        string getPlayerName() { return playerName; }
        double getPlayerBal() { return playerBalance; }
        void setPlayerName (string str);
        void setPlayerBal(int bal);
        bool isBankrupt();
};

//Class Functions
    //Player
void Player::setPlayerName(string str)
{
    str = playerName;
}
void Player::setPlayerBal(int bal)
{
    bal = playerBalance;
}
bool Player::isBankrupt()
{
    if(0 >= playerBalance) { return true; }
    else { return false; }
}

//Main
int main (int argc, char * argv[])
{

    Player player;



    return 0;
}