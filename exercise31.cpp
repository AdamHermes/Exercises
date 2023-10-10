#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
double log2(int x) {
  return log(x) / log(2.0);
}
// if (fmod(i, pow(2,j)) == 0.0 && fmod(i, pow(2,j+1)) != 0.0) 
// can use this at line 16 if we need a remainder that is of double datatype
int main(){
    int lf,rt; cin >> lf >> rt;
    int v = 0;
    int k = log2(rt);
    for (int i = lf; i <= rt; i++){
        if(i%2 == 0){
            for (int j=1;j<=k+1;j++){
                if (i%int((pow(2,j))) == 0 && i%int((pow(2,j+1)))!=0){
                    v += j;
                }
            }
        }
    }
    cout << v;
//int64_t f(int64_t x)
//{

//int64_t sum=0;

//while(x > 0)

//{ x>>=1; cout << x << endl; sum += x;}

//return sum;

//}
//int main(){
    //cout << f(15);
   // cout << "jafldskfhl";
   // cout << f(5);
//}
}