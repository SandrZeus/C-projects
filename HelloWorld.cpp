#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "******CALCULATOR********";

    std::cout <<"Please enter either (+ - * /)";
    std::cin >> op;

    std::cout << "Please enter number 1: ";
    std::cin >> num1;

    std::cout << "Please enter number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Here's the result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Here's the result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Here's the result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Here's the result: " << result << '\n';
            break;
        default:
            std::cout << "That was not a valid response" << '\n';
            break;
    }

    std::cout << "************************";

    return 0;
}