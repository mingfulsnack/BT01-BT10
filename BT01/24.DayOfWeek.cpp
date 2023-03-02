#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int d,m,y;
int main(int argc, char* args[])
{
cin>>d>>m>>y;
int n=(d+2*m+(3*(m+1))/5 + y + (y/4))%7;
switch(n)
{
case 0 :
    cout<<"Sunday";
    break;
case 1 :
    cout<<"Monday";
    break;
case 2 :
    cout<<"Tuesday";
    break;
case 3 :
    cout<<"Wednesday";
    break;
case 4 :
    cout<<"Thursday";
    break;
case 5 :
    cout<<"Friday";
    break;
case 6 :
    cout<<"Saturday";
    break;
}
}
