#include <iostream>
#include <string>
int main()
{
    int question = 10;
    char correctanswer[question] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentanswer[question];
    int correctcount = 0;

    std::cout << "Enter student's answers for 10 questions (A-B-C-D):\n";
    for (int i = 0; i < question; i++)
    {
        std::cout << "Question " << i + 1 << ": ";
        std::cin >> studentanswer[i];
    }

    for (int i = 0; i < question; i++)
    {
        if (std::tolower(studentanswer[i]) == std::tolower(correctanswer[i]))
        {
            correctcount++;
        }
    }

    int score = correctcount * 10;

    std::cout << "\nCorrect Answers: " << correctcount << "/10\n";
    std::cout << "Student's Score: " << score << " marks\n";

    return 0;
}
