#include <iostream>
#include <string>

int
main()
{
  // Запрашиваем имя
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;

  // Выводим приветствие
  std::cout << "Hello world from " << name << " !" << '\n';
  return 0;
}