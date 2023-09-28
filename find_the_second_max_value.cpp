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
    int second_max = a[0];
    for (int i =0;i<n;i++){
        if(a[i] > max){
            second_max = max;
            max = a[i];
        }   
        else if (a[i] > second_max && a[i] != max){
            second_max = a[i];
        }
    }
    
    cout << "The max value of the array is: "<< max <<'\n';
    cout << "The second max value of the array is " << second_max <<'\n';
    return 0;
}