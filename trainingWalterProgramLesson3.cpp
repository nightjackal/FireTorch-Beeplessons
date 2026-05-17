#include <iostream>
#include <string>
#include <cmath>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> parilist_t;
typedef std::string text_t;

int main()
{

    using std::cout;
    using std::string;

#pragma region calculator
    text_t firstString = "Hi there!";
    cout << firstString;
    std::cout << '\n';
    string name = "This is Jackal's Calculator\n";
    cout << name;
    int G;
    int m;
    float g;
    int h;
    cout << "What is the mass of the object in kilograms?\n";
    std::cin >> m;
    cout << "What is the gravitational acceleration of the relative gravity in meters per second squared?\n";
    std::cin >> g;
    cout << "What is the height of the object relative to the 'surface' in meters?\n";
    std::cin >> h;
    G = m * g * h; // Common multiplication operation example
    cout << "The gravitational potential energy is " << G << " joules.";
#pragma endregion;

    /*
    Some other helpful math functions:
    NOTE: You must have placed the "#include cmath" in your program to use these functions
    */

    int x = 10;
    int y = 81;
    int z = 3;
    double w = 3.14;

    cout << '\n'
         << pow(z, x) << '\n';      // Power function... z to the power of x
    cout << sqrt(y) << '\n';        // Square root function... square root of y
    cout << std::max(x, y) << '\n'; // Finds the largest of the specified numbers
    cout << std::min(x, y) << '\n'; // Finds the smallest of the numbers specified
    cout << abs(-11) << '\n';       // Absolute value function... the absolute value of -11
    cout << round(w) << '\n';       // The roundng function...
    cout << ceil(w) << '\n';        // Always rounds up function...
    cout << floor(w) << '\n';       // Always rounds down function...

    return 0;
}
