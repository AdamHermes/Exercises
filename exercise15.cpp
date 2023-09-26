#include <iostream>
#include <vector> 
using namespace std;
int main(){
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
    int result = max1;
    
    for(int j=max1;j<=multiple; j += max1){    
        bool check = true;    
        cout << j;
        for (int i=0;i<size;i++){
            if(j % list[i] !=0){
                check = false;
            }
            if (check){
                result = j;
            
            }
        }
    }
    cout << "The least common multiple of all the numbers in the array is " << result;
}