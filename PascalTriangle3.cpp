#include<iostream>
#include<vector>
using namespace std;

vector<int> res;

class PascalTriangle {
public:
    vector<int> getRow(int k);
};

vector<int> PascalTriangle::getRow(int k)
{

    vector<int> result;
    result.push_back(1);

    if(k==0)
        return result;


    else
    {
        for(int i=1;i<k;i++)
        {
            int val = (result[i-1] * (k+1-i))/(i);
            result.push_back(val);
        }
    }
    result.push_back(1);


    return result;


}

int main(){
    long row;
    cout<<"Enter the row = ";
    cin>>row;
    PascalTriangle p1;
    res=p1.getRow(row);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

    return 0;

}



