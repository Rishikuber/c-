#include <iostream>

// int getInput(prompt)
// {
//     int userInput;
//     std::cout << prompt;
//     std::cin >> userInput;

//     return userInput;
// }

// int main()
// {
//     int number1 = getInput("Enter the first number: ");
//     int number2 = getInput("Enter the second number: ");

//     std::cout << "You entered: " << number1 << " and " << number2 << '\n';

//     return 0;
// }

int getInputCode()
{
    int input_code;

    std::cout << "Enter your input code: ";
    std::cin >> input_code;

    return input_code;
}

int main()
{
    // int input_code;

    int ip_code1 = getInputCode();

    std::cout << "User entered: " << ip_code1;

    int ip_code2 = getInputCode();

    // if (input_code == 1)
    // {
    //     std::cout << "You have entered into this menu";
    // }

    return 0;
}