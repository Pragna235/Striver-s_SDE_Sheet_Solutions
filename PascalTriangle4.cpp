#include <iostream>
using namespace std;

// Function to find sum of all elements
// upto nth row.
long long int calculateSum(int n)
{

    // Initialize sum with 0
    long long int sum = 0;

    // Loop to calculate power of 2
    // upto n and add them
    for (int row = 0; row < n; row++) {
        sum = sum + (1 << row); //finding the value of 2^n and adding it to sum (left-shift)
    }

    return sum;
}

// Driver function
int main()
{
    int n;
    cout<<"Enter the number of rows= ";
    cin>>n;
    cout << " Sum of all elements:" << calculateSum(n);


    return 0;
}
