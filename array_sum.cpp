// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum(int arr[],int size)
{
    int summ=0;
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    summ=arr[0]+sum(arr+1,size-1);
    
    return summ;
}

int main() {
    // Write C++ code here
    int arr[6]={1,2,3,8,5,6};
    int n=6;
    int ans=sum(arr,n);
    cout<<ans;

    return 0;
}