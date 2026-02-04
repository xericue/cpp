// #include <iostream>

// // class Person { // okay here's a class!
// //   public:
// //     Person(std::string &name);

// //   private:
// //     int age;
// //     int income;
// // };

// int main() {
//   std::cout << "hi";
  
//   return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cin.get();
    return 0;
}