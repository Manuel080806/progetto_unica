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
    {
        temp=n2;
        n2=n1;
        n1=temp;
    }
    //il primo valore deve essere pari
    if(n1%2==1) n1++;
    int somma= 0;
    while(n1<=n2)
    {
        somma=somma +n1;
        n1+=2;
    }
    cout<<"la somma e'"<<somma;

}
