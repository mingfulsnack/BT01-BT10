#include <bits/stdc++.h>
using namespace std;
int tcs(int n)
{
 int tmp=0,res=0;
 while(n!=0)
 {
 tmp=n%10;
 n/=10;
 res+=tmp;
 }
 return res;
}
int main()
{
int n;
cin>>n;
cout<<tcs(n);
}
