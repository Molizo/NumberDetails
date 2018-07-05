#include <iostream>

using namespace std;

int main()
{int n,UC,S,nr;
    cout << "Introduceti numarul:";
    cin>>n;
    S=0;
    nr=0;
    cout<<endl<<endl<<"                     Rezultate:"<<endl<<"==============================================="<<endl<<endl<<"Ultima cifra:"<<n%10<<endl;
    while(n>0)
    {
        UC=n%10;
        S=S+1;
        nr=nr+UC;
        n=n/10;
    }
    cout<<"Numarul cifrelor:"<<S<<endl<<"Suma cifrelor:"<<nr<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
