#include <iostream>

int main() {

    int x{}; // value/list initialized
    int y{};

    std::cout << "Enter an integer: " << std::endl;
    std::cin >> x;

    std::cout << "Enter another integer: " << std::endl;
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << std::endl;
    std::cout << x << " - " << y << " is " << x - y << std::endl;
    return 0;
}