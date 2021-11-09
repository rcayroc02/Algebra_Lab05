#include <iostream>
#include<vector>
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


int euclides(int a, int b){
      ///////////////////////////////         Euclides normal
    vector <int> arr;
    int gcd;
    int a1 = a,b1 = b,q, r, n=0;

    q = a1 / b1;
    r = a1 - (q * b1);
  

    a1 = b1;
    b1 = r;
    arr.push_back(q);

    

    while (r > 0) {
        q = a1 / b1;
        r = a1 - (q * b1);
        arr.push_back(q);
        a1= b1;
        b1 = r;
        n++;
    }

    return a1;

}

int main() {
  
  char loop('i');
  int a, n;

  while (loop != 't'){


    
    cout << "Ingresar a:" ;
    cin>> a;
    cout << "Ingresar n(modulo):" ;
    cin>> n;

    if (euclides(a,n) == 1){
      cout << euclid_extent(a,n) << endl;
    }

    else if (euclides(a,n) != 1){
      cout << "no son coprimos";
      break;
    }
    
    


    cout << "Desea terminar?  (t) para terminar sesion, cualquier otra letra para no hacerlo" ;
    cin >> loop ;
  

  }
  
} 