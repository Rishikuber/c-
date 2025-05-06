#include <iostream>

float amount(int p, int r, int n)
{
   return (p * r * n) / 100;
}

int main()
{
    int principle, rate, year;
    std::cout << "Enter principal amount: ";
    std::cin >> principle;
    std::cout << "Enter rate of interest: ";
    std::cin >> rate;
    std::cout << "Enter no of years: ";
    std::cin >> year;
    float Interest = amount(principle, rate, year);
    std::cout << "Simple Interest: " << Interest << '\n';

    return 0;
}