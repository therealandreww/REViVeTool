#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <unistd.h>

using namespace std;
using namespace std::literals::chrono_literals;

void printe(string msg)
{
    cout << msg << "\n";
}

void printcenter(string msg, int width)
{
    int paddingWidth = (width / 2) - msg.length();
    string padding;
    for (int i = 0; i < paddingWidth; i++)
    {
        padding += " ";
    }

    printe(padding + msg);
}

void printcenterpf(string msg, int width, string prefix, string suffix)
{
    int paddingWidth = (width / 2) - msg.length();
    string padding;
    for (int i = 0; i < paddingWidth; i++)
    {
        padding += " ";
    }

    printe(padding + (prefix + msg + suffix));
}

void refbar(int amount)
{
    for (int i = 0; i < amount; i++)
    {
        if ((i % 2) == 0)
        {
            cout << "=";
        }
        else
        {
            cout << "-";
        }
    }
    cout << "\n";
}

void loadingbar(int delayms, string msg, int width)
{
    int i = 0;
    printe(msg);
    cout << "[";
    while (i < width) {
        cout << "=" << flush;
        // system("clear");
        sleep(1);
        i++;
    }
    cout << "]" << endl;
}