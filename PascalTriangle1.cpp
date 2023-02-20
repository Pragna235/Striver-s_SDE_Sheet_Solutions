#include<iostream>
#include<vector>
using namespace std;

class PascalTriangle {
public:
    void generate(long numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1); //no. of columns = i, for ith row
            r[i][0] = r[i][i] = 1; //first and last elements are intialised to 1

            for (int j = 1; j < i; j++) //for middle elements
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j]; //adding previous row elements
        }

        for (int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++)
            cout<<r[i][j]<<" ";
        cout<<endl;
        }

    }
};

int main(){
    long numRows;
    cout<<"Enter the number of rows = ";
    cin>>numRows;
    PascalTriangle p1;
    p1.generate(numRows);
    return 0;

}
