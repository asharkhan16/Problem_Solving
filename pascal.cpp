#include<iostream>
using namespace std;
int main(){
int i,j,n;
int c[50][50];
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(j=0;j<=i;j++){
        if(j==0 || i==j){
            c[i][j]=1;
        }
        else{
            c[i][j]=c[i-1][j]+c[i-1][j-1];
        }
            cout<<c[i][j]<<" ";
        
    }
    cout<<endl;
}
return 0;
}