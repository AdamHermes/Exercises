#include <iostream>
int main(){
    using namespace std;
    long long int a[100];
    for (int i=0; i<5; i++){
        cin >> a[i];
    }
    
    long long int b[100];
    long long int sum =0;
    for (int i =0; i<5;i++){
        for (int j =0;j<5;j++){
            sum = sum + a[j];
        } 
        sum = sum -a[i];
        b[i] = sum;
        sum =0;
    }
    
    long long int max = b[0];
    long long int min = b[0];
    for (int j =0;j<5;j++){
        if (b[j] > max){
            max = b[j];
        }
    }
    for (int k = 0;k<5;k++){
        if (b[k]< min){
            min = b[k];
        }
    }
    cout << min << " " << max;

}