#pragma once
#include <iostream>
#include <thread>
#include <chrono>

namespace loading
{
    void loadingAnim()
    {
        cout << "|";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\b";
        cout << "/";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\b";
        cout << "-";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\b";
        cout << "\\";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\b";
        cout << "|";
    }
}