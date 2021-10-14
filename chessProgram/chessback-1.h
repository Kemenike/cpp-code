//chess.h
//Include file for board and players.
#pragma once
#include <iostream>
#include <iomanip>

/*TODO  [] Working on implementing classes from chess.cpp
        [] Fix issue with board and pieces not being able to build out - Restructure needed.

*/

namespace chess
{
    class Piece
    {

    public:
        Piece() {}

        Piece(string owner, string colorInput, string nameInput, int row, int col)
        {
            name = nameInput;
            pieceOwner = owner;
            color = colorInput;
            position[0] = row;
            position[1] = col;
        }

        string getColor() { return color; }
        bool checkColor(string playerColor) { return playerColor == color; }
        void setColor(string playerColor) { color = playerColor; }
        string getOwner() { return pieceOwner; }

    private:
        string pieceOwner;
        string name;
        string color;
        int position[2];
    };
}

namespace chess
{

    class Player
    {
    public:

        Player () {
            playerName = "";
            playerColor = "";
        }
        void initializePlayer(std::string nameInput, std::string colorInput)
        {
            playerName = nameInput;
            playerColor = colorInput;
        }
        std::string getName() { return playerName; }

    private:
        std::string playerName;  //Anyname 20 char or less
        std::string playerColor; //Should only be Black or White
        int score = 0;
        int ranking = 1200;
        Piece captured[16];
        Piece controled[16];
    };
};

namespace chess
{
    class Board
    {
    public:
        Board()
        {
        }
        bool isFree(int x, int y){ return true; }

        Piece inPlace(int x, int y){}

        bool checkSpace() { return true; }
        void updateBoard(int xi, int xf, int yi, int yf)
        {
            //Change the array to match the pieces after the move.
            //If there is a piece, capture.
        }

        void display()
        {
            //Shows the current board.
            cout << setw(30);
            cout << "\n\n\n";
            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    //Overload Piece with << operand to allow output.
                    cout << setw(5) << setfill(' ');
                }
                cout << "|\n";
            }
        }
        void setBoard(string player1, string player2)
        {
            players[0] = player1;
            players[1] = player2;
        }

    private:
        string players[2];
    };
}