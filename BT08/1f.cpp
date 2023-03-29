#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(char a[])
{
    int len = strlen(a);
    for (int i = 0; i < len/2; i++)
    {
    if (a[i] != a[len - i - 1]) return false;
    }
    return true;
}

int main() {
    char a[] = "minh";
    if(is_palindrome(a)==true) cout<<"yes";
    else cout<<"no";
    return 0;
}
