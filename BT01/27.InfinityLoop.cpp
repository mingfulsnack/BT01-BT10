#include<string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int main(int argc, char* args[])
{
for(;;)
{
cin>>n;
if(n<0) break;
if(n%5==0) cout<<n/5<<endl;
else cout<<-1<<endl;
}
}
