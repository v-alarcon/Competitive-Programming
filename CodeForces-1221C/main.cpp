#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int c, m,x,teams;
        cin>>c>>m>>x;
        teams = (c+x+m)/3;
        cout << endl << min(min(c,m),teams);
    }
}