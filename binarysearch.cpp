#include <bits/stdc++.h>
using namespace std;
// case1 binarysearch return giá trị boolean
// mảng arr không nên dùng set bởi vì không truy xuất được index của set
bool binarysearch(int arr[],int l, int r, int x ){
    if(r>l){
        int mid = (l+r)/2;
        if (arr[mid]==x){
            return true;
        }
        if (arr[mid] >x){
            return binarysearch(arr,l,mid-1,x);
        }
        else return binarysearch(arr,mid+1,r,x);
    
    }
    return false;  

}
int main(){
    int n; cin >> n;
    int a[n];
    cout << "Enter the elements of the array: " << endl;
    for (int& x: a ) cin >> x;
    sort(a,a+n);
    cout << "Enter the element you want to search: ";
    int ele; cin >> ele;
    (binarysearch(a,0,n-1,ele)) ? cout << "Element is present in the array"
                                : cout << "Element is not present in the array";
                                
}