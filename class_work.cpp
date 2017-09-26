#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    double digit;
    digit = M_PI;
    std::cout << std::setprecision(3) << digit << std::endl;
///////////////////////////////////////////
    std::cout << "1 13 49" << std::endl;
///////////////////////////////////////////
    char setted_string;
    setted_string = '_';
    std::cout << "1" << setted_string << "13" << setted_string << "49" << std::endl;
///////////////////////////////////////////
    std::srand(unsigned(std::time(0)));
    std::cout << rand() << "  " << rand() << "  " << rand() << std::endl;
///////////////////////////////////////////
    double a, x, y;
    std::cout << "Then enter 'A' ";
    std::cin >> a;
    x = pow((12*a), 2) + 7*a - 12;
    std::cout << "x = " << x << std::endl;
///////////////////////////////////////////
    x = 0;
    std::cout << "Then enter 'X' ";
    std::cin >> x;
    y = pow((3*x), 3) + pow((4*x), 3) - 11*x + 1;
    std::cout << "y = " << x << std::endl;
///////////////////////////////////////////
    double v, m;
    std::cout << "Then enter volume ";
    std::cin >> v;
    std::cout << "Then enter weight ";
    std::cin >> m;
    std::cout << "density is " << m*v << std::endl;
///////////////////////////////////////////
    double b;
    a = 0;
    x = 0;
    std::cout << "Then enter first argument 'a' ";
    std::cin >> a;
    std::cout << "Then enter second argument 'b' ";
    std::cin >> b;
    x = (-b) / a;
    std::cout << "Answer:" << x << std::endl;
///////////////////////////////////////////
    double ax, ay, bx, by, length_btw_a_b;
    std::cout << "Then enter A(x) ";
    std::cin >> ax;
    std::cout << "Then enter A(y) ";
    std::cin >> ay;
    std::cout << "Then enter B(x) ";
    std::cin >> bx;
    std::cout << "Then enter B(y) ";
    std::cin >> by;
    length_btw_a_b = sqrt(pow((bx-ax), 2) + pow((by-ay), 2));
    std::cout << "The length between A(x, y) and B(x, y) is " << length_btw_a_b << std::endl;
///////////////////////////////////////////
    return 0;
}
