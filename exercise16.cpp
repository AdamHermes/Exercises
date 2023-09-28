#include <bits/stdc++.h>
using namespace std;
// tìm chuỗi ký tự dài nhất không lặp lại
// dùng set để tối ưu hóa các thuật toán liên quan đến tìm các phần tử duy nhất khác nhau
// set <char> ss có thể dùng để insert các chữ cái chứ không dùng set string vì không insert được
int main(){
    string s;
    cin >> s;
    set <char> ss;
    for (int i=0;i<s.length();i++){
        if (ss.find(s[i]) == ss.end()){
            ss.insert(s[i]);
        }   
    }
    cout << ss.size();
}