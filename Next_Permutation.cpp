#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to find the next permutation
void nextPermutation(vector<int>& arr)
{
    int n = arr.size(), i, j;

    // Find for the pivot element.
    // A pivot is the first element from
    // end of sequence which doesn't follow
    // property of non-increasing suffix
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            break;
        }
    }

    // Check if pivot is not found
    if (i < 0) {
        reverse(arr.begin(), arr.end());
    }

    // if pivot is found
    else {

        // Find for the successor of pivot in suffix
        for (j = n - 1; j > i; j--) {
            if (arr[j] > arr[i]) {
                break;
            }
        }

        // Swap the pivot and successor
        swap(arr[i], arr[j]);

        // Minimise the suffix part
        reverse(arr.begin() + i + 1, arr.end());
    }
}

// Driver code
int main()
{

    // Given input array
    vector<int> arr = { 1,4,3,2,5,6 };
    cout<<"Initial Permutation is : "<<endl;
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;

    // Function call
    nextPermutation(arr);

    // Printing the answer
    cout<<"Next Permutation is : "<<endl;

    for (auto i : arr) {
        cout << i << " ";
    }
    cout<<endl;

    return 0;
}
