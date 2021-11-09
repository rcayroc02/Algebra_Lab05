#include <iostream>
using namespace std;


int euclid_extent(int a, int b){
  int  x,x0,y, y0,q,r,z0,z1;
  int g;

  x = 0;
  y = 1;

  x0=1;
  y0=0;

  while (a != 0){
    q=b/a;
    r=b-q*a;
    z0=x-(q*x0);
    z1=y-(q*y0);

    b=a;
    a=r;

    x=x0;
    y=y0;

    x0=z0;
    y0=z1;
  }

  g = b;
  

  return x ;
  
}

int main() {
  
  cout << euclid_extent(117,244);
  
} 