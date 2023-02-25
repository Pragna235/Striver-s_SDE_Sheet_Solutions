#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector < int > & nums, vector < int > & subarray) {
    int msf = INT_MIN, meh = 0;
    int start = 0;
    for (int i = 0; i < nums.size(); i++) {
        meh += nums[i];
        if (meh > msf) {
            subarray.clear();
            msf = meh;
            subarray.push_back(start);
            subarray.push_back(i);

        }
        if (meh < 0) {
            meh = 0;
            start = i + 1;//updating the starting index of the subarray
        }
    }

    return msf;
}

int main() {
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    vector < int > subarray;
    int length = maxSubArray(arr, subarray);
    cout << "The longest subarray with maximum sum is " << length << endl;
    cout << "The subarray is " << endl;

    //subarray stores only two elements - the starting and ending indexes of the subarray
    //cout<<"subarray[0] = "<<subarray[0]<<" subarray[1] = "<<subarray[1]<<endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) {
        cout << arr[i] << " ";
    }

}
