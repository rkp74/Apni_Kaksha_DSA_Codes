#include <iostream>
using namespace std;

int Sum(int n){
    
    if(n == 0){
        return 0;
    }
    int Prevsum = Sum(n-1) ;
    return n + Prevsum ;
}

int main(){
   int n;
   cin >> n;
   cout << Sum(n) ;
}