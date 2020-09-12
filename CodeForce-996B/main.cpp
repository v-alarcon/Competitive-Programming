#include <iostream>
using namespace std;
int main() {
    int n,m,min,ans;
    min = 2147483647;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin>>m;
        if ((m-i+n)/n<min){
            min = (m-i+n)/n;
            ans = i;
        }
    }
    cout<<ans<<endl;
}
