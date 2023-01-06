#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=1,x,j,fact;
    double sum=1.0;
    cout<<"Enter the range of number:";
    cin>>n;
    cout<<"Enter the value of x:";
    cin>>x;
    while(i<=n)
    {
        fact=1;
        for(j=1;j<=i;j++){
        fact*=j;
        sum+=pow(x,i)/fact;
        }
        i++;
    }
    cout<<"The sum of the series = "<<sum;
}
