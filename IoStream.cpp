#include <iostream> // for std::cout

int main()
{
    // int x{5};
    // std::cout << "x is equal to: " << x << '\n'; // Using '\n' standalone
    // std::cout << "And that's all, folks!\n";     // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)

    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and zero-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;

    // std::cout << "Enter two numbers separated by a space: ";

    // int x{};            // define variable x to hold user input (and zero-initialize it)
    // int y{};            // define variable y to hold user input (and zero-initialize it)
    // std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    // std::cout << "You entered " << x << " and " << y << '\n';

    // return 0;
}