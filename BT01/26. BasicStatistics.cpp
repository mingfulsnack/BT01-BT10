#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n,tong=0;
int a[10001];
double tb;
int minx=9999;
int maxx=-9999;
int main(int argc, char* args[])
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
tong+=a[i];
minx=min(minx,a[i]);
maxx=max(maxx,a[i]);
}
tb=tong/n;
cout<<tb<<endl;
cout<<maxx<<endl;
cout<<minx<<endl;
}
