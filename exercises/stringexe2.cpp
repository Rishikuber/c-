#include <iostream>
#include <string>

int main()
{

    std::string user_name;
    int num;

    std::cout << "Enter your fullName: ";
    std::getline(std::cin >> std::ws, user_name);
    std::cout << "Enter your age: ";
    std::cin >> num;

    int output = num + user_name.length();

    std::cout << user_name << "`s age + length of name is: " << output;

    return 0;
}