#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int fn=n;
    int sum=0;
    int count=0;
    while(fn!=0)
    {
        fn=fn/10;
        count++;
    }
    fn=n;
    while(fn>0)
    {
        int l=fn%10;
        sum=pow(l,count);
        cout<<sum<<endl;
        fn=fn/10;
    }
    
    if(sum==n)
        cout<<n<<" is a Armstrong Number";
    else
        cout<<n<<" is not  a Armstrong Number";
    
    
}