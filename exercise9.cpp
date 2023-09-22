#include <iostream>
using namespace std;
int Fibonacci(int number)
{
    if (number <= 1) return number;
       
    return Fibonacci(number - 2) + Fibonacci(number - 1); 
}
int main(){
    cout << Fibonacci(20);

}