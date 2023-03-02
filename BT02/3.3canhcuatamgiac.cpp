#include<bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c,d;
  cin>>a>>b>>c;
  d=a+b+c;
  if (a <= 0 || b <= 0 || c <= 0) cout << "Invalid";
  else {
    if (a + b <= c || a + c <= b || b + c <= a) cout << "Invalid";
    else {
      if (a == b && b == c && a == c) {cout<<d<<endl;cout << "deu";}
      else {
        if (a == b || b == c || c == a) {cout<<d<<endl;cout << "can";}
        else {
          if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
           {
             cout<<d<<endl;
             cout<<"vuong";
           }
          } else {cout<<d<<endl;cout<<"thuong";}
        }
      }
    }
  }
}
