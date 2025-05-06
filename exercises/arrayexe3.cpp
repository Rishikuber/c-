
#include <iostream>
#include <string>

int main()
{

    // std::string subjects[5] = {"subject 1", "subject 2", "subject 3", "subject 4", "subject 5"};

    int sub_marks[5];

    int subject_count = 5;

    std::cout << "Enter marks of\n";
    for (int i = 0; i < subject_count; ++i)
    {
        std::cout << "subject" << (i + 1) << ": ";
        std::cin >> sub_marks[i];
    }

    int total = 0;

    std::cout << "\nStudent marks of\n";
    for (int i = 0; i < subject_count; ++i)
    {
        std::cout << "subject" << (i + 1) << ": " << sub_marks[i] << '\n';

        total = total + sub_marks[i];
    }

    std::cout << "\nTotal: " << total;

    return 0;
}

//     std::cout << "Enter the marks of " << subjects[0] << " = ";
//     std::cin >> subject1;
//     std::cout << "Enter the marks of " << subjects[1] << " = ";
//     std::cin >> subject2;
//     std::cout << "Enter the marks of " << subjects[2] << " = ";
//     std::cin >> subject3;
//     std::cout << "Enter the marks of " << subjects[3] << " = ";
//     std::cin >> subject4;
//     std::cout << "Enter the marks of " << subjects[4] << " = ";
//     std::cin >> subject5;

//     int total = subject1 + subject2 + subject3 + subject4 + subject5;
//     std::cout << total << "\n";