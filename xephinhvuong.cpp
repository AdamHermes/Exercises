#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    long long int target;
    for (int i=0;i<t;i++){
        cin >> target;
        long long int a = sqrt(target);
        long long int b = a+1;
        if (pow(a,2) == target){
            cout << a << " " << a;
        }
        else{
            a = a+1;
            b = b-1;
            while (a*b!= target){
                a = a+1;
                b = b-1;

            }
            cout << b << " " << a;
            
        }
        cout << endl;
    }

}