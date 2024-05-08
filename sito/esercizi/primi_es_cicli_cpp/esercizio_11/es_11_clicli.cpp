#include<iostream>
using namespace std;
int main()
{
    int n=0,mpari=0,mdispari=0,x = 0,pari = 0,dispari = 0;
    float rpari,rdispari;
    cout<<"quanti numeri vuoi inserire"<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"inserire numero "<<endl;
        cin>>x;
        if (x%2==0)
        {
            pari++;
            mpari=mpari+x;
        }
        else
        {
            dispari++;
            mdispari=mdispari+x;
        }
    }
    rpari=(float(mpari))/pari;
    rdispari=(float(mdispari))/dispari;
    cout<<"la media dei pari e' " << rpari<<endl;
    cout<<"la media dei dispari e' " << rdispari<<endl;
    if (rpari>rdispari) cout << "la media piu' grande e' quella dei pari"<<endl;
    else cout<<"la media piu' grande e' quella dei dispari"<<endl;
    return 0;
}
