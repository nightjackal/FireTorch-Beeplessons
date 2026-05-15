#include <iostream>
#include <cmath>

/*
These are called name spaces, basically they are variables that are declarede before the main
function (or prohram) executes
*/
namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

/*
We can refference them in our int main() function like below
*/
int main()
{
    using namespace second;
    std::cout << x;
    std::cout << '\n';
    /*
    You can use this line of code below so you do not have to use the namespace prefix
    everytime you wish to declare a specific variable, but if you want to use
    a different namespace, you must declare that seperately and each time
    */

        std::cout << first::x; // we use the prefix of the specific namespace we want to reffernce, then :: and then the variable
    std::cout << '\n';

    return 0;
}