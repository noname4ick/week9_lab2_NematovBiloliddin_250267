#include <iostream>

using namespace std;

int count(int num) {
    if (num < 0) {
        num = -num;
    }
    if (num < 10) {
        return 1;
    }
    return 1+ count(num/10);

}

int main(){

    int num;
    cout<<"Please one numbers:"<<endl;
    cin>>num;
    cout<<count(num);


    return 0;
}