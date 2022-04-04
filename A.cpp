#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, sfiltro;
    int vezes = 0;
    int count[100];
    string filtro = "CEUP";
    string baralho;
    
    getline (cin, baralho);
    
    n = baralho.size();
    sfiltro = filtro.size();

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sfiltro; j++) {
            if (baralho[i] == filtro[j]) {
                count[j]++;
            }
            else {
                continue;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        vezes = 0;
        for (int j = 0; j < n-2; j += 3) {           
            if (baralho[j+2] == filtro[i]) {
                for (int q = j+3; q < n-2; q+=3) {
                    if (baralho[q+2] == filtro[i]) {
                        if (baralho[j] == baralho[q] && baralho[j+1] == baralho [q+1] && baralho [j+2] == baralho [q+2]) {
                            vezes++;
                        }
                        else {
                            continue;
                        }  
                    }
                }
            }
        }
        if (vezes > 0) {
            cout<<"erro"<<"\n";
        }
        else {
            cout<<13-count[i]<<"\n";
        }
    }

}

