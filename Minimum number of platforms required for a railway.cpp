#include<bits/stdc++.h>
using namespace std;

int countPlatforms(int n, int arr[], int dep[])
{
    sort(arr,arr+n);
    sort(dep,dep+n);

    int ans=1,count=1,i=1,j=0;
     while(i<n && j<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        ans=max(ans,count);
     }
     return ans;
}

int main()
{
    int arr[] = {900,945,955,1100,1500,1800};
    int dep[] = {920,1200,1130,1150,1900,2000};
    int n = sizeof(dep) / sizeof(dep[0]);
    cout<<"Minimum number of Platforms required = "<<countPlatforms(n,arr,dep)<<endl;
    return 0;
}
