// Đếm các phần tử khác nhau trong mảng số nguyên
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,n; cin >> T;
    for(int i=0;i<T;i++){
        cin >> n;
        set <int> s;
        for (int j=0;j<n;j++){
            int x;cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    
    for(int i=0;i<T;i++){
        cout << "Enter m: ";
        int m; cin >> m;
        int a[m];
        for (int i = 0;i<m;i++){
            cin >> a[i];          
        }  
        sort(a,a+m);
        int dif =1;
        for (int j=1;j<m;j++){
            if (a[j] != a[j-1]){
                dif += 1 ;
            }
        }
        cout << dif << endl;
        
    }
    while(T--){
        int l; cin >> l;
        map <int,bool> mp;
        for (int i=0;i<l;i++ ){
            int y; cin >> y;
            mp.insert({y,true});
        }
        cout << mp.size() << endl;
    }

    
}