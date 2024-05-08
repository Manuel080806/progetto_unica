#include<iostream>
using namespace std;
int main ()
{
    //imput
    int n1,n2,temp;
    cout<<"inserire il primo numero"<<endl;
    cin>>n1;
    cout<<"inserire il secondo numero"<<endl;
    cin>>n2;
    //logica
    // controllo la coretezza dell'imput
    if(n1>n2)//scambio
    {
        temp=n2;
        n2=n1;
        n1=temp;
    }

    if(n1%2==0) n1++;
    while(n1<=n2)
    {
        cout<<n1<<endl;
        n1+=2;
        //n1=n1+2
    }

}
