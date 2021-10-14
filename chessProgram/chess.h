#pragma once
#include <iostream>
#include <vector>

#define WHITE "white"
#define BLACK "black"

namespace chess
{
    //Root class
    /* 
        -A Board should have two player, and 32 pieces (16 for each player).
    */
    class Board
    {
    public:
        Board()
        {
        }

    private:
    };
}

namespace chess
{
    //Child of Board, Parent of Pieces
        //One player should have 16 Pieces
    class Player
    {
    public:
        Player(string name) {
            initializePieces();
        }
        vector<Piece> initializePieces() {
            if(!pieces.empty()) { pieces.clear(); }
            pieces.resize(16);
            for(auto i = pieces.begin(); i != pieces.end(); i++)
            {
                if(i > 8) 
                {   
                    pieces.add(pawn);
                }
            }
            return ;
        }

    private:
        vector<Piece> pieces;
        string name;
        int rating = 1200;
    };
}

namespace chess
{
    //Child of Player.
    class Piece
    {
    public:

    private:
        string owner = "";
        string pieceType = "";

    };
}