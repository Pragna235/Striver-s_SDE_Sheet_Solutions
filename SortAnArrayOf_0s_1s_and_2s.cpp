#include<iostream>
#include<vector>
using namespace std;

class SortTheArray
{
public:
    void sortColors(int nums[],int n)
    {
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high)
        {
            switch(nums[mid])
            {
            case 0:
                swap(nums[low++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[high--]);
                break;
            }
        }
    }
};

int main()
{

    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;

    int nums[n];
    cout<<"Enter the elements consisting of only 0s, 1s and 2s : "<<endl;
    for (int i=0;i<n;i++)
        cin>>nums[i];

    SortTheArray sta;
    sta.sortColors(nums,n);

    cout<<endl<<"Sorted Array is : "<<endl;
    for(int i=0;i<n;i++)

        cout<<nums[i]<<" ";

    cout<<endl;
    return 0;

}
