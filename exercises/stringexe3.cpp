#include <iostream>
#include <string>

void countage(int age1, int age2, std::string p1, std::string p2)
{
    // std::string p1, p2;
    // int age1, age2;

    if (age1 > age2)
    {
        std::cout << p1 << "(age " << age1 << ") is older than" << p2 << "(age" << age2 << ")";
    }
    else
    {
        std::cout << p2 << "(age " << age2 << ") is older than" << p1 << "(age" << age1 << ")";
    }
}

int main()
{
    std::string p1, p2;
    int age1, age2;
    std::cout << "Enter the name of person 1 = ";
    std::getline(std::cin >> std::ws, p1);

    std::cout << "Enter the name of person 2 = ";
    std::getline(std::cin >> std::ws, p2);

    std::cout << "Enter the age of " << p1 << " = ";
    std::cin >> age1;

    std::cout << "Enter the age of " << p2 << " = ";
    std::cin >> age2;

    countage(age1, age2, p1, p2);

    // if (age1 > age2)
    // {

    //     std::cout << p1 << "(age " << age1 << ") is older than " << p2 << "(age " << age2 << ")";
    // }
    // else
    // {

    //     std::cout << p2 << "(age " << age2 << ") is older than " << p1 << "(age " << age1 << ")";
    // }

    return 0;
}