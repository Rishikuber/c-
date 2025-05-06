#include <iostream>

float feetToCm(float feet)
{
    return feet * 30.48;
}
int main()
{
    float feet;

    std::cout << "Enter height in feet: ";
    std::cin >> feet;

    // float cm = feetToCm(feet);
    // std::cout << "Height in centimeters: " << cm << " cm" << '\n';

    std::cout << "Height in centimeters: " << feetToCm(feet) << " cm" << '\n';

    return 0;
}
