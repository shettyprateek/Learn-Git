#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int rev=0;
    while(n!=0)
    {
        int l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    cout<<rev;
    
}