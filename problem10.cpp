#include <iostream>

using namespace std;

int to_binary(int n){
    if (n == 0) {
        return 0;
    }
    return n%2 + to_binary(n/2)*10;

}

int main(){

    int num;
    cout<<"Please enter a number:"<<endl;
    cin>>num;
    cout<<to_binary(num)<<endl;


    return 0;
}