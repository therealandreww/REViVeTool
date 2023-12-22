#include <iostream>
#include "colors.h"

using namespace std;

int runaction(string actionStr) {
    string action;
    action = actionStr;

    for_each(action.begin(), action.end(), [](auto& c){c = tolower(c);});
    if (action == "rvte13a") {
        system("defaults write com.apple.finder CreateDesktop false");
        system("killall Finder");
        printe("Successfully enabled feature: Hide Desktop Icons");
    }
    else if (action == "rvtd13a") {
        system("defaults write com.apple.finder CreateDesktop true");
        system("killall Finder");
        printe("Successfully disabled feature: Hide Desktop Icons");
    }
    else if (action == "rvte12b") {
        system(" defaults write com.apple.finder AppleShowAllFiles TRUE");
        system("killall Finder");
        printe("Successfully enabled feature: Show All Hidden Files");
    }
    else if (action == "rvtd12b") {
        system(" defaults write com.apple.finder AppleShowAllFiles FALSE");
        system("killall Finder");
        printe("Successfully disabled feature: Show All Hidden Files");
    }
    else if (action == "rvte11c") {
        system("defaults write com.apple.dock showhidden -bool TRUE; killall Dock");
        printe("Successfully enabled feature: Transparent Icon for Hidden Applications on Dock");
    }
    else if (action == "rvtd11c") {
        system("defaults write com.apple.dock showhidden -bool FALSE; killall Dock");
        printe("Successfully disabled feature: Transparent Icon for Hidden Applications on Dock");
    }
    else if (action == "rvte10a") {
        system("defaults write com.apple.dock no-bouncing -bool TRUE; killall Dock");
        printe("Successfully enabled feature: Disable Bouncing Applications In Dock");
    }
    else if (action == "rvtd10a") {
        system("defaults write com.apple.dock no-bouncing -bool FALSE; killall Dock");
        printe("Successfully disabled feature: Disable Bouncing Applications In Dock");
    }
    else if (action == "help" or action == "?") {
        refbar(60);
        printcenter("Action codes", 70);
        printe("");
        printe(cyan + "help    \tShow this message");
        printe(reset + "?       \tShow this message");
        printe(cyan + "list    \tList all tweaks/features");
        printe(reset + "ver     \tOutput the program version");
        printe(cyan + "support \tSupport us by buying us a coffee!" + reset);
    }
    else if (action == "list" or action == "%") {
        refbar(60);
        printcenter("Tweaks/Features", 70);
        printe("");
        printe(green + bold + "RVTE13A \t[Enable ]\t Hide Desktop Icons" + reset);
        printe(red + "RVTD13A \t[Disable]\t Hide Desktop Icons" + reset);
        printe(green + bold + "RVTE12B \t[Enable ]\t Show Hidden Files" + reset);
        printe(red + "RVTD12B \t[Disable]\t Show Hidden Files" + reset);
        printe(green + bold + "RVTE11C \t[Enable ]\t Transparent Icon for Hidden Applications on Dock" + reset);
        printe(red + "RVTD11C \t[Disable]\t Transparent Icon for Hidden Applications on Dock" + reset);
        printe(green + bold + "RVTE10A \t[Enable ]\t Disable Bouncing Applications In Dock" + reset);
        printe(red + "RVTD10A \t[Disable]\t Disable Bouncing Applications In Dock" + reset);
    }
    else if (action == "support" or action == "<3") {
        refbar(60);
        printcenter("Support Us", 70);
        printe("");
        printe(yellow + "This page is in development!" + reset);
    }
    else {
        printe(red + bold + "Error: Could not find specified action ID." + reset);
        return 1;
    }
}
