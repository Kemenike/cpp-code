/*
    Written By Kanayo Emenike

    Description: This program is a small practice exercise. 
        
        Objective: You work in a toy car workshop, and your job is to build toy cars from
        a collection of parts. Each car needs 4 wheels, 1 body, 2 figures (driver and passenger)
        to be placed inside.  Given values for number of wheels, bodies, and figures, write a
        program that will find out the maximum possible number of cars that can be completed with
        the supplies.

    5/2/2021
*/

#include <iostream>

unsigned int maxCars (int w, int b, int f) 
{
    int max = 0;
    bool possible = true;

    while(possible)
    {
        if(w > 4 && b > 1 && f > 2)
            max++;
        w = w - 4;
        b = b - 1;
        f = f - 2;
        if(w < 4 || b < 1 || f < 2)
            possible = false;

    }

    return max;
}

int main (int argc, char *argv[]) 
{
    int supplies [3];
    bool help = false;

    if(argc != 4 || argv[1] == "-h")
    {
        std::cout << "Usage[WIN]: cars.exe [-h] {wheels} {car bodies} {figures}" << std::endl;
        std::cout << "Usage[LINX]: ./cars [-h] {wheels} {car bodies} {figures}" << std::endl;
        std::cout << "Usage[iOS]: You dont." << std::endl;
    } 
    else 
    {
        supplies[0] = atoi(argv[1]);
        supplies[1] = atoi(argv[2]);
        supplies[2] = atoi(argv[3]);

        std::cout << "Maximum Toy Cars: " << maxCars(supplies[0], supplies[1], supplies[2]);
    }


    return 0;
}