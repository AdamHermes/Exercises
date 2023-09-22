#include <iostream>
int main(){
    using namespace std;
    int a[100];
    int n,t;
    cin >> n >> t;
    for (int i=0;i<n;i++){
        cin >> a[i];
    
    }
    bool found = false;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i] + a[j] == t){
                cout << i << " "<< j;
                found = true;
                break;
            }
        }
        if (found){
            break;
        }
    }
    return 0;
}   