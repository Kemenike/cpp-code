#include <iostream>
#include <chrono>
#include <windows.h>
#include <cstdlib>

using namespace std;

void loading ()
{
    int percent = 0;
    do 
    {
        percent += 10;
        cout << "|";
        Sleep(500);
        cout << "\b";
        cout << "/";
        Sleep(500);
        cout << "\b";
        cout << "-";
        Sleep(500);
        cout << "\b";
        cout << "\\";
        Sleep(500);
        cout << "\b";

    } while (percent < 100);
}

int main (int argc, char * argv[])
{
    loading();
    return 0;
}