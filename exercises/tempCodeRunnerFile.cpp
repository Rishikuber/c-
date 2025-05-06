#include <iostream>
#include <string>

int main()
{
    int days = 7;
    int temperatures[days];
    int sum = 0;
    int average, highest, lowest;

    std::cout << "Enter temperatures (in Celsius):\n";
    for (int i = 0; i < days; i++)
    {
        std::cout << "Day " << (i + 1) << ": ";
        std::cin >> temperatures[i];
    }

    highest = lowest = temperatures[0];

    for (int i = 0; i < days; i++)
    {
        sum += temperatures[i];

        if (temperatures[i] > highest)
            highest = temperatures[i];

        if (temperatures[i] < lowest)
            lowest = temperatures[i];
    }

    average = sum / days;

    std::cout << "\nTemperature for:\n";
    for (int i = 0; i < days; i++)
    {
        std::cout << "Day " << i + 1 << ": " << temperatures[i] << " degreeC\n";
    }

    std::cout << "\nAverage Temperature: " << average << " degree C\n";
    std::cout << "Highest Temperature: " << highest << " degree C\n";
    std::cout << "Lowest Temperature: " << lowest << " degree C\n";

    return 0;
}
