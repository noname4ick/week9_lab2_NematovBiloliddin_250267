#include <iostream>

using namespace std;

int even_sum(int n){
    if (n == 0) {
        return 0;
    }if (n % 2 == 0) {
        return n + even_sum(n-1);
    }
    return even_sum(n-1);
}

int main(){

    int num;
    cout<<"Please enter a number:"<<endl;
    cin>>num;
    cout<<even_sum(num)<<endl;


    return 0;
}