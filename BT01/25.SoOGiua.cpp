#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[6];
int main(int argc, char* args[])
{
for(int i=1;i<=5;i++)
    cin>>a[i];
sort(a+1,a+1+5);
cout<<a[3];
}
