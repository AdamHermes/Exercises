// find the median of 2 array after merging
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n ; cin >> m >> n;
    int a[m], b[n];
    vector <int> vt;
    for (int&x:a){
        cin >> x;
        vt.push_back(x);
    } 
    for(int&x:b) {
        cin >> x;
        vt.push_back(x);
    }
    double median;
    sort(vt.begin(),vt.end());
    if (vt.size() %2 == 0){        
        int k = (vt.size()-1) /2;
        int t = k+1;
        
        median = (vt[k] + vt[t])/2.0;
    }
    else {
        int l = vt.size()/2;
        median = vt[l];        
    }
    cout << median;

    
}