// đếm các phần tử khác nhau trong một mảng
// input: 1,2,3,2,1,4,2,4,3,1 output: 4
#include <iostream>
#include <algorithm>
int main(){
    using namespace std;
    int n;
    int a[] = {1,2,3,4,2,3,4,5,2,4,1,2,3,3,2,4,5,3,1};
    n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for (int i=0; i<n;i++){
        cout << a[i] << " ";
    }
    cout << '\n';
    int count =1;
    for (int i=1;i<n;i++){
        if (a[i] != a[i-1]){
            ++count;
        }
    }
    cout << "There are " << count << " different values" << endl;
    cout << "Enter the number of elements of array b: ";
    int m;
    int b[100];
    cin >> m;
    for (int j=0;j<m;j++){
        cin >> b[j];
    }
    sort(b,b+m, greater<int>());
    for (int j=0;j<m;j++){
        cout << b[j] << " ";
    }

    


    

}