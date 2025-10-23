#include <iostream>

using namespace std;


int reverse(int num) {

    if (num < 10) {
        cout<<num;
        return num;
    }
        cout<<num%10;
        return reverse(num/10);


}

int main(){

    int num;
    cout<<"Please one numbers:"<<endl;
    cin>>num;
    reverse(num);



    return 0;
}