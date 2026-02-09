#include <iostream>

int main() {
    
    // all the same way to initialize a variable
    int width = 5;
    std::cout << width << std::endl;
    int length{6};
    std::cout << length << std::endl;
    int height(7);
    std::cout << height << std::endl;
    
    // modern preferred way
    int bruh {};
    double fr ();
    float what = ( 4 );

    std::cout << what << std::endl;

    [[maybe_unused]] int e { 9 }, f { 10 };     // direct-list-initialization
    // also tell the compiler to shut up if these are unused

    
    

    return 0;
}