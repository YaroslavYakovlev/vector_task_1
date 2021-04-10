#include <iostream>
#include <vector>

int main(){
  std::cout << "Vector task 1" << std::endl;
  int n = 0;
  int del = 3;

  std::cout << "Enter count elements" << std::endl;  
  std::cin >> n;
  std::vector<int> vec(n);

  std::cout << "Enter elements" << std::endl;
  for(int i = 0; i < n; i++){
    std::cin >> vec[i];
  }
  std::cout << "Enter deleted element" << std::endl;  
  std::cin >> del;
  for(int i = 0; i < n; i++){
    if(vec[i] == del){
      std::vector<int>::iterator pos = vec.begin() + i;
      vec.erase(pos);
    }
  }
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }
  return 0;
}

// Пользователь вводит с клавиатуры число n, далее -- n целых чисел, 
// которые нужно записать в вектор.
// Потом пользователь вводит ещё одно значение. 
// Нужно удалить из вектора все элементы, которые равны 
// данному значению, и вывести итоговое состояние вектора
// Пример:
// Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. 
// И потом -- число 3. Необходимо, чтобы в векторе 
// остались числа 1, 5, 1, которые надо вывести их на экран. 