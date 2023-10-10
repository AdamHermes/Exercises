#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
// bài toán sắp xếp độ dài các điểm trên trục Oxy về tâm O
// trong pair thì các phần tử sẽ được đánh số giống trong map .first ; .second
bool cmp(pair <int,int> a, pair <int,int> b){
    int kc1 = a.ff * a.ff + a.ss *a.ss;
    int kc2 = b.ff *b.ff + b.ss*b.ss;
    if (kc1 != kc2) return a <b;
    else{
        if (a.ff != b.ff) return a.ff < b.ff;
        return a.ss < b.ss;
    }
    
}
//xet khoang cach -> xet hoanh do -> xet tung do
typedef pair<int,int> pii;
int main(){
    int n; cin>> n;
    vector <pii> points(n);
    for (auto& [u,v]:points ){
        cin >> u >> v;
    }
    sort(points.begin(),points.end(),cmp);
    for (auto x: points){
        cout << x.ff << " " << x.ss << endl;
    }
} 