#include<bits/stdc++.h>

using namespace std;
int factorial(int x)
{
    if(x==0||x==1)
        return 1;
    else
        return x*factorial(x-1);
}
int main()
{
    int n;
    cout<<"enter the factorial number: ";
    cin>>n;
   cout<<"Factorial of "<<n<<" is "<<factorial(n);
     return 0;
}