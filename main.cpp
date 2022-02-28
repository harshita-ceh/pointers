#include <iostream>
using namespace std;
int main() {
  int *p;
  int x=10;
  p=&x;
  cout<<"&x is "<<&x<<endl;
  cout<<"p is "<<p<<endl;
  cout<<"*p is "<<*p<<endl;
  cout<<"&x is "<<&x<<endl;
  cout<<"x is "<<x<<endl;
   *p=100;
   cout<<"x is "<<x<<endl;
}