#include <iostream>
#include <string>

int main(){
    // name 
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    // output
    std::cout << "Hello world from " << name << " !" << '\n';
    return 0;
}
