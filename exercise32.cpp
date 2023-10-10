#include <bits/stdc++.h>
using namespace std;
// bài toán tìm số lớn hơn ngay sau phần tử được nhập vào trong một mảng cho trước
// ví dụ mảng a = {1,4,3,5,7,9,6} input = 3 => output = 4
int main(){
    int n; cin >> n;
    int a[n];
    for (int&x : a) cin >> x;
    int x; cin >>x;
    sort(a,a+n);
    for (int i=0;i<n;i++){
        if (x >= a[i] && x < a[i+1]) cout << a[i+1];
        else if (x > a[n-1]){cout << "Not Found"; break;} 
    }
    cout << endl;
    // bài toán Next Greater element ví dụ mảng a = {1,4,2,5,6,3} = > {4,5,5,6,-1,-1}
    // có thể dùng for loop hoặc stack nếu dùng stack thì xem trong stack6.cpp
    int m; cin >>m;
    int b[m];
    for (int& x: b) cin >>x;
    for (int i=0;i<m;i++){
        int res = -1;
        for (int j= i+1;j<m;j++){
            if (b[j] > b[i]) {
                res = b[j];
                break;
            }
        }
        cout << res << " ";
    }
}