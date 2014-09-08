#include<iostream>
using namespace std;
int main()
{
    int n,test;
    cin>>test;
    while(test--)
    {
    cin>>n;
    int i=1;
    int flag=0;
    while(n)
    {
        while(n%i!=0 && i<n)
        i++;
        n=n-i;
        flag++;
        i=1;
    }
    if(flag%2==0)
    cout<<"Thankyou Shaktiman"<<endl;
    else
    cout<<"Sorry Shaktiman"<<endl;
    }
    return 0;
}
