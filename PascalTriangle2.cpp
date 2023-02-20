#include<iostream>
using namespace std;

// Function to print the Pascal's Triangle
void print_pascal(int row_num){

    // Loop to print each row
    for(int i = 1; i <= row_num; i++){

        // Loop to print spaces for triangular display
        for(int j = 1; j < row_num-i+1; j++)
            cout<<"  ";

        // Loop to print values using the Combinations formula
        int val = 1;
        for(int j = 1; j <= i; j++){
            cout<<val<<"   ";

            val = val * (i - j)/j;
        }
        cout<<endl;
    }
}

int main(){

    int row_num;
    cout<<"Enter number of rows = ";
    cin>>row_num;
    print_pascal(row_num);

    return 1;
}
