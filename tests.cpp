#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "funcs.h"
#include "funcs.cpp"


TEST_CASE("get_num and add"){
  myVector<int> a;
  CHECK(a.get_num() == 0); //0
  a.add(6);
  CHECK(a.get_num() ==1); //1
  CHECK(a[0] == 6); //6
}

TEST_CASE("[]"){
  myVector<int> a;
  a[1] = 5;
  CHECK(a[1] == 5);
  CHECK(a.get_num() == 2);
  a[2] = 4;
  CHECK(a[2]== 4);
  CHECK(a.get_num() == 3);
  // std::cout << a.get_l() << '\n';
  a.add(3);
  CHECK(a[3] == 3);
  CHECK(a.get_num() == 4);
  // std::cout << a.get_l() << '\n';

  a.add(2);
  CHECK(a[4] ==2);
  CHECK(a.get_num() == 5);
}
