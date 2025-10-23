#include <iostream>

using namespace std;

int maxDigit(int n){
    if (n == 0) {
        return 0;
    }
    int digit = n%10;
    int max = maxDigit(n/10);
    if (digit > max) {
        return digit;
    }
    return max;
}

int main(){

    int num;
    cout<<"Please enter a number:"<<endl;
    cin>>num;
    cout<<maxDigit(num)<<endl;


    return 0;
}