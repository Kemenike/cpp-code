//This file is used just to test my custom
//header files library.

#include <iostream>
#include "loading.h"

using namespace std;
using namespace loading;

//Test Struct
struct Test
{
    void loading();
};


//Test Struct Defenitions
void Test::loading()
{
    do
    {
        loadingAnim();
    } while (true);
}


//Main
int main(int argc, char *argv[])
{
    //Defined struct with multiple functions.
    Test test;
    test.loading();
    return 0;
}