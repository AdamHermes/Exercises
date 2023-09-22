#include <iostream>
int main(){
    using namespace std;
    int w;
    cin >> w;
    if (w%2 == 0){
        if (w == 2){
            cout << "NO";
        }
        else cout << "YES";
    }
    else cout << "NO";
    return 0;
}