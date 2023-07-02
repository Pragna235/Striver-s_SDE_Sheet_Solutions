#include<iostream>
using namespace std;

void evenodd_mathkadane(int arr[],int size)
{
    int ans=0;
    int count=1;
    for(int i=1;i<size;i++){
        if((arr[i-1] + arr[i])%2!=0){
            count++;
            ans=max(count,ans);
        }
        else
            count=1;
    }
    cout<<"The length of the longest even-odd subarray is "<<ans<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,7,9};
    int size=7;
    evenodd_mathkadane(arr,size);
    return 0;
}
