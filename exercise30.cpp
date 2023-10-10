#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    int n; cin >> n;
    int sum = 0;
    int a[n];
    a[0] = num; a[1] = num;
    sum = a[0] + a[1];
    for (int i=2;i<n;i++){
        a[i] = sum;
        sum += a[i-1];
    }
    int res =0;
    for (int x :a){
        res += x;
    }
    cout << res;
}