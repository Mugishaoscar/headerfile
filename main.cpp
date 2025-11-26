#include <stdio.h>
#include<iostream>
#include "clac.h"
#include "conv.h"

using namespace std;

int main() {
  int a,b;
  cout<<"enter rwandan frs";
  cin>>a;
  cout<<a<<"frs is equal  to"<<convert(a)<<"USD";
  // cin>>a;
  // cout<<"enter second number";
  // cin>>b;
  // printf("a + b = %d\n", add(a, b));
  // printf("a - b = %d\n", subtract(b, b));
  // return 0;
}
