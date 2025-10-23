#include <iostream>

using namespace std;

int gcd(int num1 , int num2) {

    if (num2 == 0) {
        return num1;
    }
    return gcd(num1 , num2%num1);

}

int main(){

    int a,b;
    cout<<"Please two numbers:"<<endl;
    cin>>a>>b;
    if (a > b) {
        swap(a,b);
    }
    cout<<"GCD of the numbers is: "<<gcd(a,b)<<endl;


    return 0;
}