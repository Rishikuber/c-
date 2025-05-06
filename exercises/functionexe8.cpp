#include <iostream>

char Grade(int marks)
{
    if (marks > 75)
        return 'A';
    else if (60 <= marks && marks <= 75)
        return 'B';
    else if (marks >= 35 && marks < 60)
        return 'C';
    else
        return 'F';
}

int main()
{
    int marks;

    std::cout << "Enter student marks: ";
    std::cin >> marks;

    char grade = Grade(marks);

    std::cout << "The grade is: " << grade << '\n';

    return 0;
}