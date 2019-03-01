#include<bits/stdc++.h>
 using namespace std;
 int factorial(int x)
 {
     if(x>1)
     {
         cout << "x = " << x << " at " << &x << endl;
         return x*factorial(x-1);
     }
     else
     {
         cout << "x = " << x << " at " << &x << endl;
         return 1;
     }
 }
 int main()
 {
     int n;
     cin >>n;
     cout <<factorial(n);

 }
