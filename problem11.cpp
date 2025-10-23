#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n, int i) {
    if (n <= 2) {
        return (n == 2);
    }
    if (n % i == 0) {
        return false;
    }
    if (i * i > n) {
        return true;
    }

    return isPrime(n, i + 1);
}

bool isPrimeCheck(int n) {
    return isPrime(n, 2);
}

int main(){

    int num;
    cout<<"Please enter a number:"<<endl;
    cin>>num;
    if (isPrimeCheck(num) == true) {
        cout<<"Is a prime"<<endl;
    }
    else {
        cout<<"Is not a prime"<<endl;
    }
    return 0;
}