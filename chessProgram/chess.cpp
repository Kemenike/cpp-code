/*
    Written by Kanayo Emenike
    Descritption:
        This code is a chess game. Currently the game is set to have no ai players
            but to be a two person hot-seat game, with possible AI implementation 
            later. I set out this project to practice with Multidimentional Arrays,
            but it has since turned into a much bigger project with header files and
            a more defined goal. If not completed yet, restructuring of the entire
            code will be happening soon.

    Current Issues:
        [] - Code needs to be refactored with functions in own header files.
        [] - Fix issue with overloading chesspieces, current output shows hexDecimal
                address.
        [] - Create windows for actual game.
*/

#include <iostream>
#include <iomanip>
#include "chess.h"

/*
    Refactor to have all functions in own header files.
*/

using namespace std;

enum chordX
{
    A = 0,
    B,
    C,
    D,
    E,
    F,
    G,
    H
};


int main(int argc, char *argv[])
{
    chess::Board inPlayBoard;
    chess::Player playerWhite;
    chess::Player playerBlack;

    playerWhite.initializePlayer("Player 1", "WHITE");
    playerBlack.initializePlayer("Player 2", "BLACK");

    inPlayBoard.display();

    return 0;
}