#include<string.h>
#include <iostream>
using namespace std;
int x,y,z;
bool b;
int main(int argc, char* args[])
{
cin>>x>>y>>z;
if((x<y && y<z) || (x>y && y>z)) b=true;
else b=false;
cout<<b;
}
