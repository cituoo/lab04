#include <iostream>
#include <cmath>
int main() {
// initialization
    int x = 0;
    int y = 0;
    int z = 0;
    std::cout << "Enter numbers X, Y and Z:" << std::endl;
    std::cin >> x >> y >> z;

// num1
    std::cout << "1) Both numbers are odd:   ";
    if ((x % 2 != 0) && (y % 2 != 0))
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
    std::cout << "" << std::endl;

// num2
    std::cout << "2) Only one number is less than 20:   ";
    if ((x < 20)&&(y > 20)||(x > 20)&&(y < 20))
    {
        std::cout << "True." << std::endl;
    } else
    {
        std::cout << "False." << std::endl;
    }
    std::cout << "" << std::endl;

// num3
    std::cout << "3) At least one of the numbers is 0:   ";
    if ((x == 0)||(y == 0))
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
    std::cout << "" << std::endl;

// num4
    std::cout << "4) Each of the numbers is negative:   ";
    if ((x < 0)&&(y < 0)&&(z < 0))
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
    std::cout << "" << std::endl;

// num5
    std::cout << "5) Only one of the numbers is a multiple of five:   ";
    if (((x % 5 == 0)&&(y % 5 != 0)&&(z % 5 != 0))||
        ((x % 5 != 0)&&(y % 5 == 0)&&(z % 5 != 0))||
        ((x % 5 == 0)&&(y % 5 == 0)&&(z % 5 != 0)))
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "" << std::endl;

// num6
    std::cout << "6) at least one of the numbers is greater than 100:   ";
    if ((x > 100)||(y > 100)||(z > 100))
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "" << std::endl;

// chess initialization:
    std::pair<int, int> attackingChessField;
    std::cout << "Enter first figure position: " << std::endl;
    std::cin >> attackingChessField.first >> attackingChessField.second;
    std::pair<int, int> pownedChessField;
    std::cout << "Enter second figure position: " << std::endl;
    std::cin >> pownedChessField.first >> pownedChessField.second;

// chess 1:
    if ((attackingChessField.first == pownedChessField.first)||
        (attackingChessField.second == pownedChessField.second))
    {
        std::cout << "chess1) True." << std::endl;
    }
    else
    {
        std::cout << "chess1) False." << std::endl;
    }
    std::cout << "" << std::endl;

// chess 2
    if (abs(attackingChessField.first - attackingChessField.second) ==
        abs(pownedChessField.first - pownedChessField.second))
    {
        std::cout << "chess2) True." << std::endl;
    }
    else
    {
        std::cout << "chess2) False." << std::endl;
    }
    std::cout << "" << std::endl;

// chess 3
    if (abs((attackingChessField.first - pownedChessField.first) == 1)||
        (abs(attackingChessField.second - pownedChessField.second) == 1))
    {
        std::cout << "chess3) True." << std::endl;
    }
    else
    {
        std::cout << "chess3) False." << std::endl;
    }
    std::cout << "" << std::endl;

// chess 4
    if (((attackingChessField.first == pownedChessField.first)||
         (attackingChessField.second == pownedChessField.second))||
        (abs(attackingChessField.first - attackingChessField.second) ==
         abs(pownedChessField.first - pownedChessField.second)))
    {
        std::cout << "chess4) True." << std::endl;
    }
    else
    {
        std::cout << "chess4) False." << std::endl;
    }
    std::cout << "" << std::endl;

// chess 5.1
    int pawnStep = 0;
    if (attackingChessField.first == 2)
    {
        pawnStep = 2;
    }
    else
    {
        pawnStep = 1;
    }
    if ((attackingChessField.second == pownedChessField.second)&&
        ((attackingChessField.first + pawnStep == pownedChessField.first)||
         (attackingChessField.first + 1 == pownedChessField.first)))
    {
        std::cout << "chess5.1) True." << std::endl;
    }
    else
    {
        std::cout << "chess5.1) False." << std::endl;
    }
    std::cout << "" << std::endl;
// chess 5.2
    if (((attackingChessField.first + 1 == pownedChessField.first)&&
         (attackingChessField.second + 1 == pownedChessField.second))||
        (attackingChessField.first - 1 == pownedChessField.first)&&
        (attackingChessField.second + 1 == pownedChessField.second))
    {
        std::cout << "chess5.2) True." << std::endl;
    }
    else
    {
        std::cout << "chess5.2) False." << std::endl;
    }
    std::cout << "" << std::endl;

// задачи на цикл:
// 1
    for (int i = 1; i < 10; ++i)
    {
        std::cout << i << " x 7 = " << i*7 << std::endl;
    }
    std::cout << "" << std::endl;

// 2
    int composition8x15 = 1;
    for (int i = 8; i <= 15; ++i)
    {
        composition8x15 *= i;
    }
    std::cout << "The composition btw 8x9x10x..x15 = " << composition8x15 << std::endl;
    std::cout << "" << std::endl;

// 3
    int a = 0;
    std::cout << "Enter start number: ";
    std::cin >> a;
    int composition21xa = 1;
    for (int i = a; i <= 20; ++i)
    {
        composition21xa *= i;
    }
    std::cout << "The composition btw " << a << "x...x20 = " << composition21xa << std::endl;
    std::cout << "" << std::endl;

// 4
    int b = 0;
    std::cout << "Enter end number: ";
    std::cin >> b;
    int composition1xb = 1;
    for (int i = 1; i <= b; ++i)
    {
        composition1xb *= i;
    }
    std::cout << "The composition btw " << "1x...x" << b << " = "<< composition1xb << std::endl;
    std::cout << "" << std::endl;

// 5
    std::cout << "Enter start and end numbers: ";
    std::cin >> a >> b;
    int compositionaxb = 1;
    for (int i = a; i <= b; i++)
    {
        compositionaxb *= i;
    }
    std::cout << "The composition btw " << a << "x...x" << b << " = "<< compositionaxb << std::endl;
    std::cout << "" << std::endl;
    return 0;
}
