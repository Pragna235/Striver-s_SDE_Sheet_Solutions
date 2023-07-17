#include<iostream>
using namespace std;

int main()
{
    int n=5,k=0;
    n=(n>>k);
    if((n&1)!=0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
