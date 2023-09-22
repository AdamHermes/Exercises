#include <iostream>
using namespace std;
int main(){
    int t,n,m;
    cin >> t >> n >> m;
    int l[1000][1000];
    for (int i=0;i<m;i++){
        for (int j=0;j< 3;j++){
            cin >> l[i][j];
        }
    }
    int a,b,d;
    for (int i=0;i<m;i++){
        a = l[m][1];
        b = l[m][2];
        d = l[m][3];
    }   
}