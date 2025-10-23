#include <iostream>

using namespace std;

int main(){

    srand(time(0));
    for(int i = 0;i < 100;i++){
        cout<<rand()<<", ";
    }

    return 0;
}