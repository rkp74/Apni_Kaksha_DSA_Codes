#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n,t, sum = 0;
    cin >> n;
     t=n;
    while (n > 0)
    {
        // ld represents last digit.
        int ld = n % 10;
        sum += pow(ld,3);
        n = n / 10;
    }
     
    
    if(t == sum){
        cout<<"Armstrong Number";
    } else {
        cout<<"Not a Armstrong Number";
    }

    return 0;
}
