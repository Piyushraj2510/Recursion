// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool issorted(int arr[],int size)
{
    if(size==0||size==1)
    {
        return 1;
    }
    if(arr[0]>arr[1])
    {
        return 0;
    }
    bool remainingpart=issorted(arr+1,size-1);
    return remainingpart;
}

int main() {
    // Write C++ code here
    int arr[6]={1,2,3,8,5,6};
    int n=6;
    bool ans=issorted(arr,n);
    cout<<ans;

    return 0;
}