#include "include/ask.h"
#include "include/codes.h"
#include "include/networking.hpp"

int main(int argc, char **argv)
{
    // Initialize global variables
    string action;

    // Heading
    refbar(60);
    printcenter("REViVeTool v0.3.2", 70);
    printcenter("ViVeTool for macOS", 70);
    refbar(60);
    printe("REViVeTool - macOS Feature Configuration Tool");
    printe("@andreww & @lunarhub");
    refbar(60);

    if (argc < 2) {
        printe(red + bold + "The command was incorrectly used, aborting.");
        printe(red + bold + "Use './revivetool help' to see command usage.");
        exit(1);
    }

    // Ask what to do
    // action = ask_ft();
    action = argv[1];

    for_each(action.begin(), action.end(), [](auto& c){c = tolower(c);});
    if (action == "ver") {
        if (getDataFromServer("http://adw.us.to/rvtver.txt") == "0.3.2") {
            printe(green + "The current build of REViVeTool is the LATEST build.");
        } else {
            printe(red + "The current version of REViVeTool is outdated. Please update to version " + getDataFromServer("http://adw.us.to/rvtver.txt") + ".");
        }
        exit(0);
    }

    cout << "\033[0m";

    // loadingbar(1, "Please wait...", 1);

    int actionResult;

    actionResult = runaction(action);

    return 0;
}