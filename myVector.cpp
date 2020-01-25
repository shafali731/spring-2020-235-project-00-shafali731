/*
Create a class myVector which will act similarly to a vector (or
ArrayClass from Java).

Implenent it using a dynamic array internally. It must include the
following features:

1. Initialize an empty myVector of any type (note the material we
covered in our last sessions last semester for this).

2. Overload the [] operator for assignment and access. That is, support
things like a[10] = 123 or x = a[3] + a[5].

3. a method to get the # of elements in your vector

4. The vector should grow or be able to grow as needed.
*/

#include <iostream>

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
template <typename T>
myVector<T>::myVector(){
  my_arr = new T[3];
  size = 0;
  leng = 3;
}
template <typename T>
int myVector<T>::get_num(){
  return size;
}
template <typename T>
T& myVector<T>::operator[](int i){
  if(i >=size){
    size +=1;
  }
  return my_arr[i];
}
template <typename T>
void myVector<T>::resize(){
  T* temp = new T[leng*2];
  for(int i =0; i < leng; i++){
    temp[i]= my_arr[i];
  }
  my_arr= temp;
  delete[] temp;
  leng = leng*2;
}
template <typename T>
void myVector<T>::add(T a){
  if(size >= leng){
    resize();
  }
  my_arr[size] = a;
  size++;
}
// template <typename T>
// int myVector<T>::get_l(){
//   return leng;
// }
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
