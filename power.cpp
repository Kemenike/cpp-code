/*
    Written by Kanayo Emenike
    Description: This code was created as a small experiment to test methods of calculating powers.
        The purpose of this code is to test speed and preformance of each method and compare it 
        to the pow(x, y) function already defined in C++.

    Usage : power.exe [base] [power]
*/
#include <iostream>
#include <cmath>
#include <ctime> //For adding a timer later down the line.

int recpow (int x, int y) {
    //Recursive powers - Is recursivly multiplying more efficient than pow() ?
    if(y > 1) {
        return x * recpow(x, y-1);
    } else {
        return x;
    }
}

//Binary calculation using the closest binary values to calculate the pow().
//Only works for values less than 2 ^ 32.
int binpow (int x, int y) {
    return 1;
}



int main () {

    //Is there a more percice time function? both of these work way too fast to check.

    
    time_t start = time(NULL);
    time_t recpowTime;
    std::cout << recpow(2, 4) << std::endl;
    recpowTime = time(NULL);
    std::cout << "recpow() finished in " << recpowTime - start << std::endl;

    time_t powTime = time(NULL);
    start = time(NULL);

    int powans;
    start = time(NULL);
    pow(2,4);
    powTime = time(NULL);
    std::cout << pow(2, 4) << std::endl;
    std::cout << "pow() finished in " << powTime - start << std::endl;

    return 0;
}