#include <iostream>

int main() {

    // always needs iostream - #include <iostream>
    // always need a main function
    // g++ r105.cpp - compile with g++, not gcc

    int x {5};

    // << is insertion operator

    // this is all buffered - its not sent to the console immediately
    // first its put "in line" in an intermediate memory area called the
    // stream output buffer, literally internally "std::streambuf"

    std::cout << x << std::endl;
    std::cout << "yo gurt" << std::endl;
    std::cout << "yo " << std::endl << "gurt" << std::endl;

    // OOPS USING std::endl IS SLOW BECAUSE IT ALSO FLUSHES - we dont need to do that
    // flushing is slow

    std::cout << x << '\n';
    std::cout << "yo gurt" << '\n';
    std::cout << "yo \ngurt\n";

    return 0;
}