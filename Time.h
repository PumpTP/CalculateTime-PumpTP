#include <iostream>
using namespace std;
#include <iomanip>

int getTime(int &h, int &m){
  cout<<"Input hour & min:";
  cin>> h >> m;
  return 0;
}

int subtract(int h1, int m1, int h2, int m2){
  int h = h2-h1;
  if (h<0){
    h=h*(-1);
  }
  int m = m2-m1;
  if (m<0){
    h--;
  }
  return h;
}

int subtract(int m1, int m2){
  int m = m2-m1;
  if (m<0){
    m=m+60;
  }
  return m;
}