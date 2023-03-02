#include<string.h>
#include <iostream>
using namespace std;
string f[10001];
int main(int argc, char* args[])
{
f[0]="a";
f[1]="b";
f[2]="ba";
for(int i=3;i<=10;i++)
{
f[i]=f[i-1]+f[i-2];
}
for(int i=0;i<=10;i++)
{
cout<<f[i]<<endl;
}
}
