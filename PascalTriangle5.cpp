#include<iostream>
using namespace std;

long long int fact;

long long int factorial(int x)
{
    int i,fact=1;
    for(int i=2; i<=x; i++)
      fact = fact * i;
    return fact;
}
int main()
{
    long long int n,r;
    cout<<"Enter the value of row and column of the element to be found: ";
    cin>>n>>r;

    long long int n1,r1,nr;
    n1=factorial(n);
    r1=factorial(r);
    nr=factorial(n-r);
    //cout<<n1<<" "<<r1<<" "<<nr<<endl;
    long long int val = (n1)/(r1*nr);

    cout<<"Element at nth row and rth column is : "<<val<<endl;
    return 0;


}
