#include <bits/stdc++.h>
using namespace std;
// chơi tối ưu : sử dụng sort và while loop
int main(){
    int n; cin >> n;
    int a[n], b[n];
    int res = 0;
    for (int& x:a) cin >> x;
    for (int& x:b) cin >> x;
    sort(a,a+n);
    sort(b,b+n);
    int i =0, j=0;
    while (j<n) {
        if (b[j] > a[i]) {i++;j++;res++;}
        else j++;
    }
    cout << res;
    
}