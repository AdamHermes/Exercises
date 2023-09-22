#include <iostream>
int main(){
    using namespace std;
    int a[100];
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int max = a[0];
    for (int j=0;j<n;j++){
        if (a[j]>max){
            max = a[j];
        }
    }
    int count = 0;
    for (int k=0;k<n;k++){
        if(a[k]==max){
            count += 1;
        }

    }
    cout << count;

}