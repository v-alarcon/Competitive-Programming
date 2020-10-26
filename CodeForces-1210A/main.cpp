#include <iostream>
using namespace std;
int main() {
    int graph[8][8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            graph[i][j]=0;
        }
    }
    int n,m;
    int ans = 0;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int a,b;
        cin>>a>>b;
        graph[a][b]=graph[b][a]=1;
    }
   if (n<=6){
       cout<<m<<endl;
       return 0;
   }
    for (int i = 1; i < 8; ++i) {
        for (int j = i+1; j < 8; ++j) {
            int res = m;
            for (int k = 1; k < 8; ++k) {
                if (graph[i][k]&&graph[j][k]){
                    res--;
                }
            }
            ans=max(ans,res);
        }
    }
    cout<<ans<<endl;
}
