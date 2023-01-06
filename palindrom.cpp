#include<bits/stdc++.h>

using namespace std;
void palindrome(int n)
{   int num=n;
    int t=0;
    while (n!=0)
    {
        
        t=t*10+n%10;
        n=n/10;
        
    }
    
    if(t==num)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome ";
}
int main()
{
    int n=10101;
     palindrome(n);
       return 0;
}