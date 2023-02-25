#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }

    cout<<"Stock can be bought price : "<<minPrice<<endl;
    cout<<"Stock can be sold at : "<<maxPro+minPrice<<endl;

    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);

    cout << "Max profit is: " << maxPro << endl;
}

