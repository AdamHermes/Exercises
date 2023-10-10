#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    // Cách 1 dùng set
    int n; cin >>n;
    set <int> a;
    for (int i=0;i<n;i++){
        int x; cin >>x;
        if (x <0){
            a.insert(x);
        }
    }
    cout << "The largest negative number from the given array is: " << *a.rbegin() << endl;
    // Cách 2 dùng sort
    int m; cin >>m;
    vector <int> b;
    for (int i=0;i<m;i++){
        int x; cin >> x;
        if(x<0){
             b.push_back(x); 
        }       
    }
    sort (b.begin(),b.end());
    cout << "The largest negative number from the given array is: " << *b.rbegin() << endl;
    

}