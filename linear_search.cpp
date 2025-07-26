// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key)
{
    
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==key)
    {
        return 1;
    }
    bool rem_part=linearsearch(arr+1,size-1,key);
    return rem_part;
    
}

int main() {
    // Write C++ code here
    int arr[6]={1,2,3,8,5,6};
    int n=6;
    int k=3;
    int ans=linearsearch(arr,n,k);
    cout<<ans;

    return 0;
}