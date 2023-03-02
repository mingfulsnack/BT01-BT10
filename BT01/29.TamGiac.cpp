#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int main(int argc, char* args[])
{
cin>>n;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
cout<<"*";
cout<<endl;
}
}
