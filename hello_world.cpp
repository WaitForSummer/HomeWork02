#include <iostream>
#include <string>

int main(){
    // Имя 
    std::string name;
    std::cout << "Введите Ваше имя: ";
    std::cin >> name;

    // Вывод
    std::cout << "Приветсвтие всем от " << name << " !" << '\n';
    return 0;
}