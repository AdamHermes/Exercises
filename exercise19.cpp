// liệt kê các số thuộc mảng thứ nhất mà không thuộc mảng thứ hai
// dòng đầu: test case; dòng 2: số lượng phần tử của mảng 1 và 2; dòng 3 phần tử mảng 1; dòng 4: phần tử mảng 2
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m ; cin >> n >> m;
    set <int> a;
    set <int> b;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        a.insert(x);
    }
    for (int j=0;j<m;j++){
        int y; cin >> y;
        b.insert(y);
    }
    for (int x:a){
        if (b.find(x) == b.end()) cout << x << " ";
    }
}

