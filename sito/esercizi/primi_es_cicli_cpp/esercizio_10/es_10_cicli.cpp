#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int num, minimo, massimo;
    bool maxOk = false;
    bool minOk = false;
    do{
        cout << "inserisci un nuovo valore";
        cin >> num;

        if (num!=0)
        {
          // massimo
          if ((num%2!=0)&&((num>massimo)||(!maxOk)))
          {
              massimo = num;
              maxOk = true;
          }
          // minimo
          if ((num%2==0)&&((num<minimo)||(!minOk)))
          {
              minimo = num;
              minOk = true;
          }         
        }
    }
    while(num!=0);

    if(!minOk || !maxOk) cout << "manca almeno un valore";  
    else cout << "il risultato finale e' " << minimo*massimo;

    return 0;
}
