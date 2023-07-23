#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int n = v.size();

    int cnt1=0,cnt2=0,ele1,ele2;

    for(int i=0;i<n;i++){
        if(cnt1==0 && v[i]!=ele2){
            cnt1=1;
            ele1=v[i];
        }
        else if(cnt2==0 && v[i]!=ele1){
            cnt2=1;
            ele2=v[i];
        }
        else if(v[i]==ele1)cnt1++;
        else if(v[i]==ele2) cnt2++;
        else{
            cnt1--, cnt2--;
        }
    }

    vector<int> res;

    cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele1)cnt1++;
        if(v[i]==ele2)cnt2++;
    }

    int mini=int(n/3)+1;
    if(cnt1>=mini) res.push_back(ele1);
    if(cnt2>=mini) res.push_back(ele2);

    return res;
}

int main()
{
    vector<int> arr={11,33,33,11,33,11};
    vector<int> ans = majorityElement(arr);
    cout<<"The majority elements are : ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
