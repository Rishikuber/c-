#include <iostream>
#include <string>

int main()
{
    std::string player_names[3];
    float player_stats[3][2];

    std::string data[] = {"name", "average", "strike-rate"};

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Enter details for player" << (i + 1) << ":\n";

        for (int j = 0; j < 3; ++j)
        {
            std::cout << data[j] << " : ";

            if (j == 0)
            {
                // std::cin >> player_names[i];
                std::getline(std::cin >> std::ws, player_names[i]);
            }
            else
            {
                std::cin >> player_stats[i][j];
            }
        }

        std::cout << "\n\n";
    }

    std::cout << "Batting order according to their strike rate:\n";

    std::cout << "Player Report:\n";
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << player_names[i] << " ";

    //     if (0 <= player_stats[i][1] && player_stats[i][1] <= 75)
    //     {
    //         std::cout << " Lower Order\n";
    //     }
    //     else if (75 < player_stats[i][1] && player_stats[i][1] <= 120)
    //     {
    //         std::cout << " Middle Order\n";
    //     }
    //     else
    //     {
    //         std::cout << " Top Order\n";
    //     }
    // }

    for (int i = 0; i < 3; ++i)
    {
        // std::cout << player_names[i] << " With Strike of : " << player_stats[i][1];
        std::cout << "With Strike of : " << player_stats[i][1];

        if (0 <= player_stats[i][1] && player_stats[i][1] <= 75)
        {
            std::cout << " Lower Order\n";
        }
        else if (75 < player_stats[i][1] && player_stats[i][1] <= 120)
        {
            std::cout << " Middle Order\n";
        }
        else
        {
            std::cout << " Top Order\n";
        }
    }

    // std::cout << "Last Order:\n";
    // for (int i = 0; i < 5; ++i)
    // {
    //     if ("0" <= player[i][2] && player[i][2] <= "75")
    //     {
    //         std::cout << player[i][0] << " With Strike of : " << player[i][2] << "\n";
    //     }
    // }

    // std::cout << "\n";

    // std::cout << "Middle Order:\n";
    // for (int i = 0; i < 5; ++i)
    // {
    //     if ("75" < player[i][2] && player[i][2] <= "120")
    //     {
    //         std::cout << player[i][0] << " With Strike Rate of : " << player[i][2] << "\n";
    //     }
    // }

    // std::cout << "\n";

    // std::cout << "Top order:\n";
    // for (int i = 0; i < 5; ++i)
    // {
    //     if ("120" < player[i][2])
    //     {
    //         std::cout << player[i][0] << " with Strike Rate of : " << player[i][2] << "\n";
    //     }
    // }

    // int totalavg = 0;

    // for (int i = 0; i < 5; ++i)
    // {
    //     totalavg = totalavg + player[i][1];
    // }

    // std::cout << totalavg;

    return 0;
}