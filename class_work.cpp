#include <iostream>

int main() {
// initialization
    std::pair<int, int> a;
    std::cout << "Enter pair numbers X and Y:" << std::endl;
    std::cin >> a.first >> a.second;
    int z = 0;
    std::cout << "Enter Z:" << std::endl;
    std::cin >> z;

// num1
    if ((a.first % 2 != 0) && (a.second % 2 != 0))
    {
        std::cout << "1) True." << std::endl;
    }
    else
    {
        std::cout << "1) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// num2
    if ((a.first < 20)&&(a.second > 20)||(a.first > 20)&&(a.second < 20))
    {
        std::cout << "2) True." << std::endl;
    } else
    {
        std::cout << "2) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// num3
    if ((a.first == 0)||(a.second == 0))
    {
        std::cout << "3) True." << std::endl;
    }
    else
    {
        std::cout << "3) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// num4
    if ((a.first < 0)&&(a.second < 0)&&(z < 0))
    {
        std::cout << "4) True." << std::endl;
    }
    else
    {
        std::cout << "4) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// num5
    if (((a.first % 5 == 0)&&(a.second % 5 != 0)&&(z % 5 != 0))||
       ((a.first % 5 != 0)&&(a.second % 5 == 0)&&(z % 5 != 0))||
       ((a.first % 5 == 0)&&(a.second % 5 == 0)&&(z % 5 != 0)))
    {
        std::cout << "5) True." << std::endl;
    }
    else
    {
        std::cout << "5) False" << std::endl;
    }
    std::cout << "" <<std::endl;

// num6
    if ((a.first > 100)||(a.second > 100)||(z > 100))
    {
        std::cout << "6) True." << std::endl;
    }
    else
    {
        std::cout << "6) False" << std::endl;
    }
    std::cout << "" <<std::endl;

// chess initialization:
    std::pair<int, int> firstChessField;
    std::cout << "Enter boat position: " << std::endl;
    std::cin >> firstChessField.first >> firstChessField.second;
    std::pair<int, int> secondChessField;
    std::cout << "Enter horse position: " << std::endl;
    std::cin >> secondChessField.first >> secondChessField.second;

// chess 1:
    if ((firstChessField.first == secondChessField.first)||
        (firstChessField.second == secondChessField.second))
    {
        std::cout << "chess1) True." << std::endl;
    }
    else
    {
        std::cout << "chess1) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// chess 2
    if (abs(firstChessField.first - firstChessField.second) ==
        abs(secondChessField.first - secondChessField.second))
    {
        std::cout << "chess2) True." << std::endl;
    }
    else
    {
        std::cout << "chess2) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// chess 3
    if (abs((firstChessField.first - secondChessField.first) == 1)||
        (abs(firstChessField.second - secondChessField.second) == 1))
    {
        std::cout << "chess3) True." << std::endl;
    }
    else
    {
        std::cout << "chess3) False." << std::endl;
    }
    std::cout << "" <<std::endl;

// chess 4
    if (((firstChessField.first == secondChessField.first)||
        (firstChessField.second == secondChessField.second))||
        (abs(firstChessField.first - firstChessField.second) ==
         abs(secondChessField.first - secondChessField.second)))
    {
        std::cout << "chess4) True." << std::endl;
    }
    else
    {
        std::cout << "chess4) False." << std::endl;
    }
    std::cout << "" <<std::endl;
    return 0;
}
