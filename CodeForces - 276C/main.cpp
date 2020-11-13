#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int n,q,u,a,b;
ll nlist[200001];
ll index[200001];
ll tree[200001];
ll ans;

void update(int x, ll val)
{
    while (x <= n)
    {
        tree[x] += val;
        x += (x & -x);
    }
}
ll read(int x)
{
    int sum=0;
    while (x>0)
    {
        sum+=tree[x];
        x -= (x & -x);
    }
    return sum;
}
int main() {
    cin>>n>>q;
    for (int i = 0; i < n; ++i) {
        cin>>u;
        nlist[i]=u;
    }
    sort(nlist,nlist+200001);
    for (int i = 0; i < q; ++i) {
        cin>>a>>b;
        update(a,1);
        update(b+1,-1);
    }
    for (int i = 0; i <= n; ++i) {
        index[i-1]=read(i);
    }
    sort(index,index+200001);
    for (int i = 0; i < 200001; ++i) {
        ans += index[i]*nlist[i];
    }
    cout<<ans;
}
