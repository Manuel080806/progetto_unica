#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i=0;
    int contapari =0;
    while(i<10)
    {
        cout<<"inserisci un nuovo valore"<<endl;
        cin>> n ;
        if(n%2==0) contapari++;
        i++;
    }
    cout<< contapari*100/10<<"%" <<endl;
}
