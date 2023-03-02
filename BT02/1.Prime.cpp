#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n;

int main(int argc, char* args[])
{
int dem=0;
cin>>n;
if(n<2) {cout<<"no";return 0;}
for(int i=1;i<=n;i++)
    if(n%i==0) dem++;
if(dem>2) cout<<"no";
else cout<<"yes";
}
