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
    return 0;
}