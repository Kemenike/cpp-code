/*
    Written by Kanayo Emenike
    
    The Ackerman Function was wrtten and developed in the late 1920s by
        Gabriel SUdan and Wihelm Ackerman.

    Description: This program will attempt to run the program as much as it can with
        timed outputs.

    Upon running this program on my i7-8550U @ 3.6GHz~, Windows 10 Machine
    I was only able to reach ack(4,1) after 8 seconds. 
*/
#include <iostream>
#include <ctime>

unsigned long long int ack(int m, int n)
{
    unsigned long long int ans;
    if (m == 0)
    {
        ans = n + 1;
    }
    else if (n == 0)
    {
        ans = ack(m - 1, 1);
    }
    else
    {
        ans = ack(m - 1, ack(m, n - 1));
    }
    return ans;
}

void runAck(time_t start) 
{
    int answer;
    double seconds;
    time_t now_t;

    for(int i = 0; i <= 6; i++)
    {
        for(int j = 0; j<= 6; j++)
        {
            answer = ack(i, j);
            time(&now_t);
            seconds = difftime(now_t, start);
            printf("Ackermann(%i, %i) is %i. Found in %i seconds.\n", i, j, answer, seconds);
        }
    }
}

int main()
{
    std::cout << "Testing of the Ackermann recursion." << std::endl;
    time_t start = time(NULL);
    runAck(start);

    return 0;
}