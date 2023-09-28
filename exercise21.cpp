#include <bits/stdc++.h>
// in ra các chuỗi tạo thành bảng chữ cái alphabet
// vì các giá trị của set là độc nhất và set chỉ nhận giá trị string nên khi size của set = 26 thì set có tất cả ký tự
using namespace std;
int main(){
    int T; cin >> T;
    while (T--){
        cin.ignore();
        string s;
        getline(cin, s);
        set <char> word;
        for (auto x: s){
            word.insert(tolower(x));
        }
        (word.size() == 26) ? cout << "YES \n"  : cout << "NO \n" ;        
    }
    set <string> se;
    cin.ignore();
    string sss;
    getline(cin,sss);
    stringstream ss(sss);
    string word;
    while (ss >> word){
        se.insert(word);
    }
    cout << se.size();
    // ví dụ ở bài tập trong file set.cpp ta đếm các phần tử từ một string là y trong một vòng lặp for sau đó insert các string y vào
    // trong set <string> ; còn ở trong bài tập này ta phải nhập vào một chuỗi ký tự được ngăn nhau bởi dấu cách
    // nên ta dùng stringstream để tách các từ trong chuỗi và nạp các từ vào trong set <string> để in ra các từ khác nhau
    // đối với những bài tập cần in ra phần tử xuất hiện nhiều nhất và số lần xuất hiện của chúng thì dùng map first second và gán giá
    // trị cho max_freq =0 rồi tiến hành so sánh


} 


