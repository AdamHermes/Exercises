#include <bits/stdc++.h>
// bài toán kiểm tra một số có thuộc về 1 mảng 
using namespace std;
int main(){
    // Cách 1 dùng Set
    int n; cin >>n;
    set <int> a;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        a.insert(x);
    }
    int y;
    cin >>y;
    if(a.find(y) != a.end()) cout << "Found";
    else cout << "Not Found";
    cout << endl;
    // Cách 2 dùng map
    int m; cin >>m;
    map <int,bool> mp;
    for (int i=0;i<m;i++){
        int z; cin >>z;
        mp.insert({z, true});
    }
    int t; cin >> t;
    if (mp.count(t) == true) cout << "Found";
    else cout << "Not Found";
    // Cách 3 dùng binary search
    int l; cin >> l;
    int c[l];
    for (int& x: c) cin >>x;
    int num; cin >>num;
    if (binary_search(c,c+l,num)) cout << "Found";
    else cout << "Not Found";


}

    
    

