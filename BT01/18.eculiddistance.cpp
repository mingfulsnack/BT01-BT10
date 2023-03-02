#include<string.h>
#include <iostream>
#include <cmath>
using namespace std;
double a,b,x,y;
double dis;
int main(int argc, char* args[])
{
cin>>a>>b>>x>>y;
dis=sqrt((a-x)*(a-x) + (b-y)*(b-y));
cout<<dis;
}
