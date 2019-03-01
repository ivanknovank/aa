#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    char b[10];
    for(int i=1;i<=3;i++)
    {
        cin >>a[i];
        cout <<&a[i]<<" ";
    }
    cout <<endl;
    for(int i=0;i<3;i++)
    {
        cin >>b[i];
        cout<<(void*)&b[i]<<" ";
    }
cout <<factorial(3);
}
