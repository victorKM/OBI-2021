#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,x,new_size;
    cin >> n;
    vector <int> vet;
    int soma = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        
        if (x == 0) {
            vet.pop_back();
        }
        else {
            vet.push_back(x);
        }
        
    }

    new_size = vet.size();

    for (int i = 0; i < new_size; i++) {
        soma += vet[i];
    }

    cout<<soma<<"\n";

}
