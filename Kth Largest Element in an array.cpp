#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int left, int right) //Sorting in descending order
{
    int pivot=arr[left];
    int l=left+1;
    int r=right;

    while(l<=r){
        if(arr[l]<pivot && arr[r]>pivot){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        if(arr[l]>=pivot){
            l++;
        }
        if(arr[r]<=pivot){
            r--;
        }
    }
    cout<<"arr[left] = "<<arr[left]<<" arr[r] = "<<arr[r]<<endl;
    swap(arr[left],arr[r]);
    cout<<"r = "<<r<<endl;
    return r;
}

int kth_Largest_Element(vector<int> &arr,int k)
{
    int left=0,right=arr.size()-1,kth;

    while(1){
        int idx=partition(arr,left,right);
        if(idx==k-1){
            kth=arr[idx];
            break;
        }
        if(idx<k-1){
            left=idx+1;
        }
        else{
            right=idx-1;
        }
    }
    return kth;
}

int main()
{
    vector<int> arr={12,3,5,7,4,29,26};
    int n=arr.size(),k=5;

    cout<<"Array elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans = kth_Largest_Element(arr,k);
    cout<<"Kth Largest Element is = "<<ans<<endl;
    return 0;
}
