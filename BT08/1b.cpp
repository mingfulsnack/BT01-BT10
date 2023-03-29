#include<bits/stdc++.h>
using namespace std;

void delete_char(char a[], char c)
{
    int len = strlen(a);
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] != c)
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
}

int main() {
    char a[] = "minh";
    delete_char(a, 'm');
    cout << a << endl;
    return 0;
}
