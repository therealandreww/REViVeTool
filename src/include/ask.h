#include <iostream>
#include <cstring>

#include "../include/stda.h"

using namespace std;

string ask_asm()    {
    int foundLen;
    string userchoice;
    bool realbreak;
    string options[2] = {"e", "d"};
    string optmean[2] = {"enable", "disable"};
    
    printe("\e[1;35m> Enter E or enable to enable a feature, D or disable to disable. <\e[0m");
    while (true)    {
        if (realbreak)  {
            break;
        }
        cout << "$ \e[1;32m";
        getline(cin, userchoice);
        cout << "\e[0m";
        // if (['A', 'S', 'M', 'a', 's', 'm'].includes(userchoice))    {
        //     break;
        // }   else    {
        //     cout << "\e[1;31mInvalid value!\e[0m\n";
        // }

        bool found = false;
        for (int i = 0; i < 10 ; i ++){
            if (userchoice == options[i])   {
                foundLen = i;
                found = true;
            }
        }
        if (!found) {
            printe("\e[1;31mError | Invalid value.\e[0m");
            realbreak = false;
        }   else    {
            realbreak = true;
        }
    }
    // Outside the loop, means user entered acceptable
    // value during the getline() section.
    printe("You chose \e[1;32m" + optmean[foundLen] + "\e[0m!");
    return optmean[foundLen];
}

string ask_ft() {
    string userchoice;

    printe("\e[1;35m> Please enter the ID of the action you want to perform. <\e[0m");
    cout << "$ \e[1;32m";
    getline(cin, userchoice);

    return userchoice;
}