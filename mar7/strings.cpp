#include <iostream>
#include <string>

int main() {
    // string class called as any other library is called
    std::string hi = "Hi";
    std::cout << hi << '\n';

    // methods are like uhhhh len. how do we call methods on objects in cpp?

    std::cout << hi + " Vro\n";
    std::cout << hi + '\n';
    std::cout << hi.append(" Vro\n");
    std::cout << hi + hi + hi << hi;

    return 0;
}