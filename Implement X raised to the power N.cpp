#include<bits/stdc++.h>
using namespace std;

double pow(double x, int n)
{
    double ans=1.0;
    long long nn=n;

    if(nn<0){ //if power is negative, make it positive
        nn = (-1)*nn;
    }

    while(nn){ //find x**n using binary exponentiation
        if(nn%2==0){
            x=x*x;
            nn/=2;
        }
        else{
            ans=ans*x;
            nn--;
        }
    }

    if(n<0){ //if power was negative, calculate 1/x**n
        ans=(double)1.0 / (double)ans;
    }

    return ans;
}

int main()
{
    double x;
    int n;
    cout<<"Enter the values of Base (x) and Power (n) : "<<endl;
    cin>>x>>n;
    cout<<pow(x,n)<<endl;
    return 0;
}
