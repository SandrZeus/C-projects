#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string string1, std::string string2);


int main()
{
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    
    std::string firstName;
    std::cout << "What is ur first name?: ";
    std::cin >> firstName;
    std::string lastName;
    std::cout << "What is ur last name?: ";
    std:: cin >> lastName;
    std::string fullName = concatString(firstName, lastName);
    

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";
    std::cout << fullName;

    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2;
}