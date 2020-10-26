#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
    int t,n,k,sum;
    vector<int> ans;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cin>>n;
        k=2;
        while (k<n){
            sum = pow(2,k)-1;
            if (n%sum==0){
                ans.push_back(n/sum);
                break;
            }
            k++;
        }
    }
    for (int j = 0; j < t; ++j) {
        cout<<ans[j]<<endl;
    }
}
