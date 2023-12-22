#include "include/ask.h"
#include "include/codes.h"

int main()
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

    // Ask what to do
    action = ask_ft();

    cout << "\033[0m";

    loadingbar(10, "Please wait...", 1);

    // if (action == "RVTE13A") {
    //     system("defaults write com.apple.finder CreateDesktop false");
    //     system("killall Finder");
    //     printe("Successfully enabled feature: Hide Desktop Icons");
    // }
    // else if (action == "RVTD13A") {
    //     system("defaults write com.apple.finder CreateDesktop true");
    //     system("killall Finder");
    //     printe("Successfully disabled feature: Hide Desktop Icons");
    // }
    // else if (action == "RVTE12B") {
    //     system(" defaults write com.apple.finder AppleShowAllFiles TRUE");
    //     system("killall Finder");
    //     printe("Successfully enabled feature: Show All Hidden Files");
    // }
    // else if (action == "RVTD12B") {
    //     system(" defaults write com.apple.finder AppleShowAllFiles FALSE");
    //     system("killall Finder");
    //     printe("Successfully disabled feature: Show All Hidden Files");
    // }
    // else if (action == "RVTE11C") {
    //     system("defaults write com.apple.dock showhidden -bool TRUE; killall Dock");
    //     printe("Successfully enabled feature: Transparent Icon for Hidden Applications on Dock");
    // }
    // else if (action == "RVTD11C") {
    //     system("defaults write com.apple.dock showhidden -bool FALSE; killall Dock");
    //     printe("Successfully disabled feature: Transparent Icon for Hidden Applications on Dock");
    // }
    // else if (action == "RVTE10A") {
    //     system("defaults write com.apple.dock no-bouncing -bool TRUE; killall Dock");
    //     printe("Successfully enabled feature: Disable Bouncing Applications In Dock");
    // }
    // else if (action == "RVTD10A") {
    //     system("defaults write com.apple.dock no-bouncing -bool FALSE; killall Dock");
    //     printe("Successfully disabled feature: Disable Bouncing Applications In Dock");
    // }
    // else if (action == "HELP" or action == "help" or action == "?") {
    //     refbar(60);
    //     printcenter("Action codes", 70);
    //     printe("");
    //     printe("help  \tShow this message");
    //     printe("?     \tShow this message");
    //     printe("list  \tList all tweaks/features");
    //     printe("ver   \tOutput the program version");
    // }
    // else if (action == "LIST" or action == "list" or action == "%") {
    //     refbar(60);
    //     printcenter("Tweaks/Features", 70);
    //     printe("");
    //     printe("RVTE13A \t[Enable ]\t Hide Desktop Icons");
    //     printe("RVTD13A \t[Disable]\t Hide Desktop Icons");
    //     printe("RVTE12B \t[Enable ]\t Show Hidden Files");
    //     printe("RVTD12B \t[Disable]\t Show Hidden Files");
    //     printe("RVTE11C \t[Enable ]\t Transparent Icon for Hidden Applications on Dock");
    //     printe("RVTD11C \t[Disable]\t Transparent Icon for Hidden Applications on Dock");
    //     printe("RVTE10A \t[Enable ]\t Disable Bouncing Applications In Dock");
    //     printe("RVTD10A \t[Disable]\t Disable Bouncing Applications In Dock");
    // }
    // else {
    //     printe("Error: Could not find specified action ID.");
    //     return 1;
    // }

    int actionResult;

    actionResult = runaction(action);

    return 0;
}