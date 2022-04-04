#include <bits/stdc++.h>
using namespace std;

int main () {
    char res[6];
    int count = 0;

    for (int i = 0; i < 6; i++) {
        cin >> res[i];
    }

    for (int i = 0; i < 6; i++) {
        if (res[i] ==  'V') {
            count++;
        }
        else {
            continue;
        }
    }

    if (count == 5 || count == 6) {
        cout <<"1"<<"\n";
    }
    else if (count == 4 || count == 3) {
        cout <<"2"<<"\n";
    }
    else if (count == 2 || count == 1) {
        cout <<"3"<<"\n";
    }
    else {
        cout<<"-1"<<"\n";
    }


    
}