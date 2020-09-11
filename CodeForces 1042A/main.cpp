#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main() {
    double n, k, b, maxi, min;
    vector<int> benches;
    cin >> n >> k;
    for (int i = 0; i < n ; ++i) {
        cin >> b;
        benches.push_back(b);
    }
    maxi = *max_element(benches.begin(), benches.end()) + k;
    min = max(*max_element(benches.begin(), benches.end()), int(ceil((std::accumulate(benches.begin(), benches.end(), 0) + k) / n))) ;
    cout << min << " " << maxi << endl;
}
