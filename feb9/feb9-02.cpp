#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<int> bruh { 5, 6, 7 };

    for (int num : bruh) {
        std::cout << num << std::endl;
    }
    return 0;
}
