#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &num)
{
    vector<vector<int>> res;
    sort(num.begin(),num.end());
    int n=num.size();

    for(int i=0;i<n-2;i++){
        if(i==0 || i>0 && num[i]!=num[i-1]){
            int low = i+1;
            int high=n-1;
            int sum=0-num[i];
            while(low<high){
                if(num[low]+num[high]==sum){ //b+c=-a
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[low]);
                    temp.push_back(num[high]);
                    res.push_back(temp);

                    while(low<high && num[low]==num[low+1]) low++;
                    while(low<high && num[high]==num[high+1]) high--;

                    low++,high--;
                }
                else if(num[low] + num[high]<sum) low++;
                    else high--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr{-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans=threeSum(arr);
    cout<<"The Triplets are as follows : "<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
