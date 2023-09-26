#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    int a[10000];
    cin >> t;
    
    for (int i=0;i<t;i++){
        cin >> n;
        int sum = 0;
        for (int j=0;j<n;j++){
            cin >> a[i];
            sum += a[i];
        }
        bool count = false;
        for (int num : a){
            for (int i = 1; i <= sum/3; i++){
                for (int j=i;j<= (sum-i)/2;j++){
                    int k = sum - i - j;
                    if (i != num && j!= num && k != num){
                        if(i+j+k == sum){
                            count = true;
                        
                        }
                    }
                }

            }
        }
        if (count) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }
}