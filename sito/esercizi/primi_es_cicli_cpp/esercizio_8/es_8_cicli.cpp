#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    cout<<"inserire un numero"<<endl;
    cin>>n;
    if(n%2>0)
        i = n - 1;
    else
        i = n;
    while (i>0)
    {
        cout<<i<<endl;
        i=i-2;
    }
    return 0;
}
