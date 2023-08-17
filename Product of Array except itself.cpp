#include<bits/stdc++.h>
using namespace std;

void findproduct(int arr[],int product[],int n)
{
    int prefix[n];
    prefix[0]=1;
    for(int i=1;i<n;i++){
         prefix[i]=prefix[i-1]*arr[i-1];
    }
    int suffixproduct=1;
    for(int i=n-1;i>=0;i--){
        product[i]=suffixproduct*prefix[i];
        suffixproduct*=arr[i];
    }


}

int main()
{
    int arr[]={1,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int product[n];
    findproduct(arr,product,n);

    cout<<"The product of array Except itself is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    cout<<endl;
    return 0;
}
