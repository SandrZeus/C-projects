#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "Enter your choice:\n";
        std::cout << "1. show balance\n";
        std::cout << "2. desposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);            
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for visiting\n";
                    break;
            default: std::cout << "Invalid choice\n";
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Yout balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount = 0;

    std::cout << "Enter amout to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Thats not a valid amount\n";
        return 0;
    }

}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter the amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Not possible\n";
        return 0;
    }

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Thats not a valid amount\n";
        return 0;
    }
    
}