#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    map <string,int> mp;
    while (n--){
        // dùng map để lưu key là tên và value là số lần xuất hiện    
        string name;
        getline(cin,name);
        if(mp.find(name) == mp.end()){
            cout << name;
        } 
        else {
            cout << name << mp[name];
        }
        mp[name] ++;    
        cout << endl;    
        
    }
}