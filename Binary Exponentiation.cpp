#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the value of base (n) : "<<endl;
    cin>>n;
    cout<<"Enter the value of the power (k) : "<<endl;
    cin>>k;

    int num=n,kk=k,ans=1;

    while(k!=0){
        if(k%2==0){
            n=n*n;
            k/=2;
        }
        else{
            ans=ans*n;
            k--;
        }
    }
    cout<<num<<" raised to the power "<<kk<<" is "<<ans<<endl;
    return 0;
}
