#include <iostream>

char FirstAlphabet(char a, char b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    char alpha1, alpha2;
    std::cout << "enter first integer: ";
    std::cin >> alpha1;
    std::cout << "enter second integer: ";
    std::cin >> alpha2;
    char first = FirstAlphabet(alpha1, alpha2);
    std::cout << "output: " << first << '\n';

    return 0;
}