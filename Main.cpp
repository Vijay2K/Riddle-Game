#include <iostream>
#include <ctime>

void PrintIntroduction(int difficulty) {
    std::cout << "_______________________________________________________\n\n";
    std::cout << "Now you are at LEVEL " << difficulty <<" security\n\n";
    std::cout << "You need to enter the correct codes to breach the security... \n\n";
    std::cout << "_______________________________________________________\n\n";

}

void ASCIIArt() {
    std::cout << "_______________________________________________________\n";
    std::cout << "/                                                       /\n";
    std::cout << 
    "|            Ha ha, I hacked your system !!           |\n";
    std::cout << 
    "\_________              _______________________________/\n";
    std::cout << 
    "          \\_         __/    ___---------__              \n";
    std::cout << 
    "            \\      _/      /              \\_            \n";
    std::cout << 
    "             \\    /       /                 \\           \n";
    std::cout << 
    "              |  /       | _    _ \          \\          \n";
    std::cout << 
    "              | |       / / \\  / \\ |          \\         \n";
    std::cout << 
    "              | |       ||   ||   ||           |        \n";
    std::cout << 
    "              | |       | \\_//\\_/ |           |        \n";
    std::cout << 
    "              | |       |_| (||)   |_______|   |        \n";
    std::cout << 
    "              | |         |  ||     | _  / /   |        \n";
    std::cout << 
    "               \\ \\        |_________|| \\/ /   /         \n";
    std::cout << 
    "                \\ \\_       |_|_|_|_|/|  _/___/          \n";
    std::cout << 
    "                 \\__>       _ _/_ _ /  |                \n";
    std::cout << 
    "                          .|_|_|_|_|   |                \n";
    std::cout << 
    "                          |           /                 \n";
    std::cout << 
    "                          |__________/                  \n";
}

bool HackTheSystem(int level_Difficulty) {

    PrintIntroduction(level_Difficulty);
    
    //code to hack the computer
    int CodeA = rand() % level_Difficulty + level_Difficulty + 2;
    int CodeB = rand() % level_Difficulty + level_Difficulty + 2;
    int CodeC = rand() % level_Difficulty + level_Difficulty + 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    //Printing the code sum and code product
    std::cout << "There are 3 numbers in the code... \n";
    std::cout << "The codes add-up to : " << CodeSum << std::endl;
    std::cout << "The code multiply to give : " << CodeProduct << std::endl;

    //player input guess
    int GuessA, GuessB, GuessC;

    std::cout << std::endl;
    std::cout << "Enter The Code : \n"; 
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;

    // check the hacker code and the actual code is equal
    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You have successfully breached into level " << level_Difficulty << " security.\n\n\n";
        std::cout << "_______________________________________________________\n\n";
        return true;
    } 
    else {
        std::cout << "No! code you have entered was wrong!! TRY AGAIN !! \n\n\n";
        std::cout << "_______________________________________________________\n\n";
        return false;
    }
}

//main() called when the program starts
int main() {
    srand(time(NULL));
    std::cout << "YOU ARE A VIGILANTE HACKER WANTS TO HACK THE DARK WEBSITE... \n\n";
    std::cout << "YOU NEED TO BREACH INTO 5 LEVEL OF SECURITY TO HACK THE SYSTEM.\n\n";

    int levelDifficulty = 1;
    const int maxLevel = 5;
    while (levelDifficulty <= maxLevel)
    {
        bool bLevelComplete = HackTheSystem(levelDifficulty);
        
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete) {
            ++levelDifficulty;
        }

    }

    ASCIIArt();    
    return 0;
}