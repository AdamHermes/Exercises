#include <bits/stdc++.h>
#include <math.h>
int main(){
    using namespace std;
    int n; cin >> n;
    std::vector <int> a;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    long long max = -1e9;
    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            for (int k=j+1;k<n;k++){
                if (a[i]+ a[j] + a[k] > max){
                    max = a[i] + a[j] + a[k];
                }
            }
        }
    }
    cout << "The maximum sum of 3 integers from the array is " << max << endl;
    // cách 1 cách trâu bò;  độ phức tạp O(n^3)
    // cách 2 : thuật toán sort sắp xếp; độ phức tạp O(nlogn)
    sort(a.begin(),a.end());
    cout << "The maximum sum of 3 integers from the array is " << a[n-1]  + a[n-2] +a[n-3]; 
    cout << endl;
    // Bài toán tìm ước chung lớn nhất
    std:: vector <int> originalA = a;
    std::vector <int> b;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            while(a[i] * a[j] !=0 && i!=j){
                if(a[i]>a[j]){                    
                    a[i] = a[i]%a[j];                     
                }
                else {                    
                    a[j] = a[j]%a[i];                    
                }
            }
            int s = a[i] + a[j];
            //cout << s <<" " << a[i] << " "<< a[j] << endl;
            b.push_back(s);
            a = originalA;            
        } 
    }
    int maximum = b[0];
    for (int i=0;i<b.size();i++){
        if (b[i] > maximum)
            maximum = b[i];
    }
    cout << "The greatest common divisor possible of 2 numbers from the array is "<< maximum;
    // Bài tập tìm bội chung nhỏ nhất
    // least common multiple
    int size; cin >> size;
    vector <int> list(size);
    for (auto& element : list){
        cin >> element;
    }
    int max1 = list[0];
    int multiple = 1;
    for (int x:list){
        if(x > max1){
            max1= x;
        }
        multiple *= x;
    }
    int result = 0;
    for(int j=max1;j<=multiple; j+max1){
        bool check = true;
        for (auto element : list){
            if(j % element !=0){
                bool check = false;
                break;
            }
        if (check){
            int result = j;
        }
        }
    }
    cout << "The least common multiple of all the numbers in the array is " << result;

    
}