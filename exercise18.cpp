// bài toán tìm xem 1 phần tử có trong mảng hay không
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Cách 1: Dùng set
    int T; cin >> T;
    for (int i=0;i<T;i++){
        int n; cin >> n;
        set <int> a;
        for (int i=0;i<n;i++ ){
            int x; cin >> x;
            a.insert(x); 

        } 

        int q; cin >> q;
        int b[q];
        for (int j=0;j<q;j++){
            int y; cin >> y;
            b[j] = y;
        }
        for (int k=0;k<q;k++){
            if (a.find(b[k]) != a.end()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    // Cách 2: dùng sắp xếp + binary search
    // tự tạo dựng hàm binary search trong binarysearch.cpp
    // còn ở đây sẽ dùng hàm binary_search tích hợp sẵn
    for (int i=0;i<T;i++){
        int m;cin>>m;
        int b[m];
        for (int& x: b) cin >>x;
        int p; cin >> p;
        for (int j=0;j<p;j++){
            int x; cin >> x;
            if (binary_search(b,b+m,x)) cout << "YES \n";
            else cout << "NO \n";
        }
        
    }
}