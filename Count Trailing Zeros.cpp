#include<iostream>
using namespace std;

int main()
{
    int n=28;
    int count=0;
    while(n>0){
        count+=n/5;
        n/=5;
    }
    cout<<"The trailing zeroes are : "<<count<<endl;
    return 0;
}
