#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a[1000];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if(a[i].length() <=10){
            cout << a[i] << endl;
        }
        else{
            string m = to_string(a[i].length() -2);
            a[i].erase(1,a[i].length()-2);
            a[i].insert(1, m);
            cout << a[i] << endl;
        }
    }
}