#include<bits/stdc++.h>

using namespace std;
void mean(int a[])
{
    float sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i];

    cout<<"\nMean "<<sum/5;
}
void median(int a[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"\nMedian "<<a[2];
}
int main()
{
    int a[]={2,4,5,7,8};
    mean(a);
    median(a);
    
    
    return 0;
}