#pragma once
#include <iostream>
#include <string>

template <class T>
class myVector {
public:
  myVector();
  // myVector(int a);
  int get_num();
  T& operator[](int i);
  void add(T a);
  // int get_l();
private:
  T* my_arr;
  int size;
  int leng;
  void resize();

};
