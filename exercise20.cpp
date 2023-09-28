// tìm và in ra số xuất hiện nhiều nhất trong mảng và số lần xuất hiện của số đó
//  nếu có 2 số có cùng tần suất xuất hiện thì lấy số nhỏ nhất
#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int,int> mp;
    int n; cin >> n;
    for (int i=0; i<n;i++){
        int x; cin >> x;
        mp[x] += 1;
    }
    int max_freq = 0;
    int num = 0;
    for (auto x: mp){
        if (x.second >= max_freq){
            num = x.first;
            max_freq = x.second;
        }
    }
    cout << num << " " << max_freq;
    // in ra ký tự xuất hiện nhiều nhất trong mảng
    cout << endl;
    map <char,int> mp1;
    string word;
    cin >> word;
    for (int i=0;i<word.length();i++){
        mp1[word[i]] +=1;

    }
    char w;
    int freq = 0;
    for (auto y : mp1){
        if (y.second>= freq){
            w = y.first;
            freq = y.second;
        }
    }
    cout << w << " " << freq;

}