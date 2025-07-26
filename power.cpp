#include <iostream>
using namespace std;

int power(int a,int b)
{
    
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    int ans=power(a,b>>1);
    if(b&1)
    {
        ans=a*ans*ans;
    }
    else
    {
        ans=ans*ans;
    }
    return ans;
}

int main() {
    
    cout <<"enter numbers a and b"<<endl;
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans<<endl;

    return 0;
}