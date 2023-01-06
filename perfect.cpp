#include<bits/stdc++.h>

using namespace std;
void perfect(int x)
{
    int sum=0;
    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
        cout<<"\nPerfect";
    else
        cout<<"\nNot Perfect";
}
int main()
{
int n;
cout<<"Enter the range: ";
cin>>n;
perfect(n);
    
return 0;
}