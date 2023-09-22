#include <iostream>
int main(){
    using namespace std;
    int a[100];
    int n;
    cin >> n;
    int b = 0;
    int c = 0;
    int d = 0; 
    for (int i =0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i] >0){
            b += 1;
        }
        if (a[i] < 0){
            c +=1;
        }
        if (a[i] ==0){
            d +=1;
        }
    

    }
    double x = (double)b/n;
    double y = (double)c/n;
    double z = (double)d/n;
    cout << x <<'\n' << y <<'\n' << z;
    return 0;
    
    
}