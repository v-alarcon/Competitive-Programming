#include<bits/stdc++.h>
using namespace std;


template<class T>
struct FenwickTree{
    vector<T>FT;
    int n;

    // constructor
    FenwickTree(int n) : n(n){
        FT.resize(n + 1);
    }

    // suma acumulada de 0 a pos
    T query(int pos){
        pos ++;
        T sum = 0;
        while(pos > 0){
            sum += FT[pos];
            pos -= (pos & (-pos));
        }
        return sum;
    }

    // suma acumulada de l a r
    T query(int l, int r){
        return query(r) - query(l - 1);
    }

    // Agrega val a la posicion pos
    void addUpdate(int pos, T val){
        pos ++;
        while(pos <= n){
            FT[pos] += val;
            pos += (pos & (-pos));
        }
    }

    // Setea val a la posicion pos
    void setUpdate(int pos, T val){
        addUpdate(pos, val - query(pos, pos));
    }
};


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n;
    cin >> t;
    FenwickTree<long long>FT(t);
    for (int i = 0; i < t; ++i) {
        cin>>n;
        FT.setUpdate(i,n);
    }
    int x,a,b;
    char y;
    vector<long long> ans;
    cin>>x;
    x=2*x;
    while (x,x--){
        cin.get(y);
        if (y=='q'){
            cin>>a>>b;
            ans.push_back(FT.query(a-1,b-1));
        }
        if (y=='u'){
            cin>>a>>b;
            FT.addUpdate(a-1,b);
        }
    }
    int c = 0;
    while (c+1<ans.size()){
        cout<<ans[c]<<endl;
        c++;
    }
    if (ans.size()>0){
        cout<<ans[c];
    }
}