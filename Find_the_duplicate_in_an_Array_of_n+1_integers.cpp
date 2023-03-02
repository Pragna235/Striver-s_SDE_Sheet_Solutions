#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector < int > & nums) {
  int slow = nums[0]; //slow pointer initialized to 0
  int fast = nums[0]; //fast pointer initialized to 0
  do {
    slow = nums[slow]; //slow pointer incremented by one step
    fast = nums[nums[fast]]; //fast pointer incremented by two steps
  } while (slow != fast); //until collision occurs
  fast = nums[0]; //fast pointing to the first element once collision occurs
  while (slow != fast) { //until another collision occurs (which means duplicate is found)
    slow = nums[slow]; //increment slow by one step
    fast = nums[fast]; //increment fast by one step
  }
  return slow;
}
int main() {
  vector < int > arr;
  arr = {1,4,4,2,3};
  int n= arr.size();
  cout<<"n= "<<n<<endl;
  cout<<"The array is : "<<endl;
  for(int i=0;i<n;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}
