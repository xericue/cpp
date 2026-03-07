#include <iostream>

struct Dog {
    // members of a struct are public by default in C++
    int age {};
};

int main() {
    std::cout << "hi\n";

    Dog new_new{1};

    std::cout << new_new.age << '\n';
    return 0;

}

#include <iostream>