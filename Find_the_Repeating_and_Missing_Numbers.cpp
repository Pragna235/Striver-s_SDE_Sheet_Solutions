#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector < int > repeatedNumber(const vector < int >&arr) {
    /* Will hold xor of all elements and numbers from 1 to n */
    int xor1;


    /* Will have only single set bit of xor1 */
    int set_bit_no;

    int i;
    int x = 0; // missing
    int y = 0; // repeated
    int n = arr.size();

    xor1 = arr[0];

    /* Get the xor of all array elements */
    for (i = 1; i < n; i++)
        xor1 = xor1 ^ arr[i];
    cout<<"xor1 of all array elements = "<<xor1<<endl<<endl;

    /* XOR the previous result with numbers from 1 to n */
    for (i = 1; i <= n; i++)
        xor1 = xor1 ^ i;
    cout<<"xor1 of previous result with numbers from 1 to n = "<<xor1<<endl<<endl;

    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = xor1 & ~(xor1 - 1);
    cout<<"set_bit_no = "<<set_bit_no<<endl<<endl;

    /* Now divide elements into two sets by comparing a rightmost set bit
       of xor1 with the bit at the same position in each element.
       Also, get XORs of two sets. The two XORs are the output elements.
       The following two for loops serve the purpose */

    for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no)
            /* arr[i] belongs to first set */
        {
             x = x ^ arr[i];
        cout<<"First for loop x = "<<x<<endl<<endl;
        }

        else
            /* arr[i] belongs to second set */
           {
             y = y ^ arr[i];
        cout<<"First for loop y = "<<y<<endl<<endl;
           }
    }

    for (i = 1; i <= n; i++) {
        if (i & set_bit_no)
          {
             x = x ^ i;
        cout<<"Second for loop x = "<<x<<endl<<endl;
          }  /* i belongs to first set */


        else
            /* i belongs to second set */
          {
              y = y ^ i;
        cout<<"Second for loop y = "<<y<<endl<<endl;
          }
    }

    // NB! numbers can be swapped, maybe do a check ?
    int x_count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]==x)
            x_count++;
        cout<<"x_count = "<<x_count<<endl<<endl;
    }

    if (x_count==0)
        return {y, x};

    return {x, y};
}

int main()
{
    const vector<int>arr={1,2,5,3,3};

    cout<<"Given Array is : "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    vector<int> result = repeatedNumber(arr);

    cout<<"The repeating and missing elements from the array are : "<<endl;

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;


}
