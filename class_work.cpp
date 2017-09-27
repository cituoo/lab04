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
    std::cout << "21  42  47" << std::endl;
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
    double h, p, c;
    std::cout << "Then enter first side ";
    std::cin >> a;
    std::cout << "Then enter second side ";
    std::cin >> b;
    std::cout << "Then enter hight ";
    std::cin >> h;
    c = abs(a-b)/2;
    c = sqrt(pow(c, 2) + pow(h, 2));
    p = c * 2 + a + b;
    std::cout << "The perimeter is " << std::setprecision(3) << p << std::endl;
////////////////////////////////////////////
    double r_big, r_small;
    std::cout << "Then enter R ";
    std::cin >> r_big;
    std::cout << "Then enter r ";
    std::cin >> r_small;
    std::cout << "The S is " << std::setprecision(3) <<
                  M_PI * pow(r_big, 2) - M_PI * pow(r_small, 2) << std::endl;
////////////////////////////////////////////
    double s;
    std::cout << "Then enter side of square ";
    std::cin >> a;
    v = pow(a, 3);
    s = 4 * pow(a, 2);
    std::cout << "The v is " << v << ". The s is " << s << std::endl;
/////////////////////////////////////////////
    std::cout << "Then enter side of square ";
    std::cin >> a;
    p = 4 * a;
    std::cout << "The P is "<< p << std::endl;
/////////////////////////////////////////////
    std::cout << "Then enter r of circle ";
    std::cin >> a;
    p = 2 * a;
    std::cout << "The d is "<< p << std::endl;
/////////////////////////////////////////////



    return 0;
}
