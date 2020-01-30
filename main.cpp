#include <iostream>
#include "funcs.h"
#include "funcs.cpp"

int main(){
  myVector<int> a;
  std::cout << a.get_num() << '\n'; //0
  a.add(6);
  std::cout << a.get_num() << '\n'; //1
  std::cout << a[0] << '\n'; //3
  a[1] = 5;
  std::cout << a[1] << '\n';
  std::cout << a.get_num() << '\n';
  std::cout << "/* message */" << '\n';
  a[2] = 4;
  std::cout << a[2] << '\n';
  std::cout << a.get_num() << '\n';
  // std::cout << a.get_l() << '\n';
  a.add(3);
  std::cout << a[3] << '\n';
  std::cout << a.get_num() << '\n';
  // std::cout << a.get_l() << '\n';

  a.add(2);
  std::cout << a[4] << '\n';
  std::cout << a.get_num() << '\n';
  // std::cout << a.get_l() << '\n';
  return 0;
}
