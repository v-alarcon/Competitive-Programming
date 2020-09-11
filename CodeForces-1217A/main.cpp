#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int> ans;
    for (int i = 0; i < n; ++i) {
        int str, in, exp, A, B, mid;
        cin>>str>>in>>exp;
        A = 0;
        B = exp;
        while (A<B){
            mid = A +(B-A)/2;
            if (str + mid > in + exp - mid){
                B = mid;
            }
            else{
                A = mid + 1;
            }
        }
        if (str + A > in + exp - A){
            ans.push_back(exp-A+1);
        } else{
            ans.push_back(0);
        }
    }
    for (int i = 0; i < n ; ++i) {
        cout << ans[i] <<endl;
    }
}
