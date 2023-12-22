#include <iostream>
#include <cstring>

using namespace std;
//#include "../include/stda.h"

void confirm()
{
    string confirmval;
    cout << "Is this correct? (\e[1my\e[0m/N) $ ";
    getline(cin, confirmval);
    cout << endl;
    if (confirmval == "N" or confirmval == "n") {
        printe("\e[0;31mBug reported during test process. Please fix it.\e[0m");
        exit(0);
    }
}