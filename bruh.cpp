#include <iostream>
#include <thread>

class Person { // okay here's a class!
  public:
    Person(std::string &name);

  private:
    int age;
    int income;
};

int main() {
  std::cout << "hi";
  
  return 0;
}
