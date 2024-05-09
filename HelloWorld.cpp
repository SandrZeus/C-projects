#include <iostream>
#include <string>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "Correct! number of tries: " << tries << '\n';
        }
    }while(guess != num);

    return 0;
}