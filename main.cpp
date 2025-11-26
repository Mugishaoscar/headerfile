#include <stdio.h>
#include<iostream>
#include "clac.h"
using namespace std;

int main() {
  int a,b;
  cout<<"enter first number";
  cin>>a;
  cout<<"enter second number";
  cin>>b;
  printf("a + b = %d\n", add(a, b));
  printf("a - b = %d\n", subtract(b, b));
  return 0;
}
