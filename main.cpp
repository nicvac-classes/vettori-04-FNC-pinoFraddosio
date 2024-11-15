#include <iostream>
#include <vector>
#include<ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n,cont_pari,max,min,imax,imin;
    cont_pari = 0;
    cout<<"Inserire le dimensioni del vettore: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = random()%1001;
    }

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            cont_pari ++;
        }
    }

    cout<<"Sono stati generati "<<cont_pari<<" numeri pari nel vettore"<<endl;

    min = v[0];
    max = v[0];
    imax = 0;
    imax = 0;

    for(int i = 1; i < n; i++){
        if(v[i] > max){
            max = v[i];
            imax = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(v[i] < min){
            min = v[i];
            imin = i;
        }
    }

    cout<<"Il numero massimo trovato nel vettore è: "<<max<<" e la sua posizione è : "<<imax<<"; Il numero minimo è: "<<min<<" e la sua posizione è: "<<imin<<endl;

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
