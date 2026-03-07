#include <iostream>

// prompt and ask for three #s
int main() {
    // int x {}, y {};

    // std::cout << "type a number yo\n";

    // std::cin >> x >> y;

    // std::cout << "twin you really printed " << x << " and " << y << "...\n";

    // // trying to assign a char to an int fails extraction and so it quits immediately
    // // you can just type "6 7" and itll put ya through because extraction internally
    //     // keeps going until whitespace or \n, so its smart like that

    // Enter three numbers: 4 5 6
    // You entered 4, 5, and 6.

    int x {}, y {}, z {};

    std::cout << "Enter three numbers: ";

    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n"; 

    return 0;
}