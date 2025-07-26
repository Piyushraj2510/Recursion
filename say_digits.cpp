// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void saydigit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    int num=n%10;
    cout<<arr[num]<<"  ";
    n=n/10;
    
    saydigit(n,arr);
}

int main() {
    // Write C++ code here
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n=12345;
    saydigit(n,arr);

    return 0;
}