#include "include/ask.h"
#include "include/test.h"
#include "include/colors.h"
#include <math.h>

using namespace std;

int main()
{
    // Heading
    refbar(60);
    printcenter("REViVeTool v0.3.2", 70);
    printcenterpf("Unit & Assertion Tests", 70, "\e[0;32m", "\e[0m");
    refbar(60);
    printe("REViVeTool - macOS Feature Configuration Tool");
    printe("@andreww & @lunarhub");
    refbar(60);
    printcenter("colors.h Variable Test", 70);
    printe("");
    printe("\e[0;33mThis should be yellow.\e[0m This should not be yellow.");
    confirm();
    printe("\e[0;36mThis should be cyan.\e[0m This should not be cyan.");
    confirm();
    printe("\e[0;32mThis should be green.\e[0m This should not be green.");
    confirm();
    printe("\e[0;35mThis should be purple.\e[0m This should not be purple.");
    confirm();
    refbar(60);
    printcenter("math.h Unit Test", 70);
    printe("");
    printe("This should be 10 + 10, aka 20: " + to_string(10 + 10));
    confirm();
    printe("This should be 1 / 1, aka 1: " + to_string(1 / 1));
    confirm();
    printe("This should be 2 ^ 2, aka 4: " + to_string(pow(2, 2)));
    confirm();
    printe("This should be 10 * 10, aka 100: " + to_string(10 * 10));
    confirm();

    printe(bold + cyan + "RE" + green + "ViVe" + cyan + "Tool" + reset + " > " + green + "No issues occured during the test process." + reset);
    printe(bold + cyan + "RE" + green + "ViVe" + cyan + "Tool" + reset + " > " + green + "Test completed and exited with code 0." + reset);

    return 0;
}