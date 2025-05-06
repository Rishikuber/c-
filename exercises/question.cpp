// Enter details for player1
// name: 
// average: 
// strike-rate:

// Player Report:
// Virat (154) - You should play in Top Order
// Sundar (100) - You should play in Middle Order 

// - take details of 5 players

// - details: average strike-rate

#include <iostream>

int main()
{
    // 
    int player1_details[] = { 55, 130 };

    int player_average[5] = {};
    int player_sr[5] = {};

    int total_avg = 0;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "average: ";
        std::cin >> player_average[i];

        std::cout << "strike-rate: ";
        std::cin >> player_sr[i];

        total_avg += player_average[i];
    }

    int id = 3;

    std::cout << "Player 3 details: ";
    std::cout << player_average[2];

    float player_details[5][2] = {
        { 55, 130 },
        { 55, 130 },
        { 55, 130 },
        { 55, 130 },
        { 55, 130 },
    };

    for (int j = 0; j < 2; ++j)
    {
        std::cout << player1_details[2][j];
    }

    // int student_details[2][3] = {

    // };

    // for (i)
}
