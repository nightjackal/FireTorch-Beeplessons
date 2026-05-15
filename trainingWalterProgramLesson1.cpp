#include <iostream>
#include <cmath>

int main()
{
    // "//" is how to make a comment

    /*
    This is how you make a multiline comment
    */

    int x;
    /*
    This "int x" declares a varialble, "int" specifies that this type of variable is an integer.
    */

    x = -1;
    /*
    This sets the variable to a certain number.
    This can be changed later in the program, it can be set to user input;
    like mouse positions, keybindings, and even outsourced data.
    */

    /*
    A variable is exactly what you used in algebra,
    except in coding it can be used for, yes numbers,
    but also characters, strings of characters, booleans (True or falses),
    and even expressions such as "x = a + b"
    */

    std::cout << x;
    std::cout << '\n';
    /*
    This lines essentially says standard output (std::)to the terminal or output down below (cout) of the (<<) variable (x)
    We always use a semicolon (;) in C++ and C to declare the end of a line of code so the computer can correctly compile the code
    so that it will function correctly.
    */

    /*
    Run this code in the terminal to display the value of the variable (x), it should be equal to negative one.
    Make sure you do not click on the output window to run the code, otherwise it will say language not recognized.
    It says this because it thinks what is in your output is the program you are trying to run
    even thought the program you are trying to run outputs there. So, make sure you are in the actual script editor's window
    before you try to run your program.
    */

    // Here are a list of variable types:

    int R = 1;
    // Integer variable
    double y; // = grabage value assigned number because is currently not defined as anything else
    // so the computer doesn't know what to do with it, thus an almost random number is generated
    // Integer with decimals
    char z = 'A';
    // Stores a single character
    char v[12] = "Hello there";
    /*Stores the specified number of characters, this is called a string,
    and although this is an informal way of syntax, it works too*/

    bool w = true;  // = 1
    bool W = false; // = 0
    // Booleans can be only true or false, these are its only two states

    // Let's diplay these variables we declared
    std::cout << R;
    std::cout << '\n';
    char note[24] = "Notice how this outputs";
    std::cout << note;
    std::cout << '\n';
    std::cout << y;
    std::cout << '\n';
    std::cout << z;
    std::cout << '\n';
    std::cout << v;
    std::cout << '\n';
    std::cout << w;
    std::cout << '\n';
    std::cout << W;
    std::cout << '\n';

    /*
    Now, we are going to tyalk about strings...
    Strings are basically list of characters that the computer recognizes as a group,
    and it gets a fancy syntax:
    */
    std::string variable;
    variable = "Hi how are you?";
    std::cout << variable;
    std::cout << '\n';

    /*
    Strings are also commonly called a type of object
    */
    /*
    You can do fancy things with strings, like adding them together...
    Make sure to add the ' ' (space) between the strings.
    */
    std::cout << variable + ' ' + note;

    // here is a practice program to calculate the circumference of a circle:
    std::cout << '\n';
    double PI = 3.12159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference;
    std::cout << '\n';
    std::string message = "This is the circumference of a circle ^";
    std::cout << message;
    std::cout << '\n';

    /*
    Now I will introduce constants:
    Constants are basically variables that you cannot change throughout your program,
    this can prevent buggs. Its syntax is as follows:
    */
    const double C = 299792458; // The speed of light for example
    const double ONEMOLE = 6.022;
    // These values can be all variable types as well, not just doubles
    const double sumValue = C + ONEMOLE;
    std::cout << sumValue;
    std::cout << '\n';
    std::string messageSumValue = "This is one mole plus the speed of light ^";
    std::cout << messageSumValue;
    std::cout << '\n';

    /*This code down below is just a little fun I was
    having with an extension library, dont mind it*/
    double result = pow(2.0, 4.5); // Calculates 2^3
    std::cout << result;
    std::cout << '\n';

    return 0;
}

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
int main2()
{
    int x = 0;
    std::cout << first::x;
    std::cout << '\n';

    return 0;
}