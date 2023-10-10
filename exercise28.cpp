// bài tập sắp xếp các số trong mảng số nào có nhiều số lẻ hơn thì đứng trc
// trường hợp nhiều số có cùng chữ số lẻ thì số nào nhỏ hơn đứng trước
#include <bits/stdc++.h>
int odd(int n){
    int odd = 0;
    while (n){
        int res = n%10;
        if (res %2 !=0) odd++;
        n /= 10;
    }
    return odd;
}
using namespace std;
bool check (int x, int y){
    if (odd(x) == odd(y)){
        return x < y;
    }
    return odd(x) < odd(y);
}
int main(){
    int n; cin >> n;
    int a[n];
    for (int& x:a) cin >>x;
    sort(a,a+n,check);
    for (int x : a) cout << x << " ";

}