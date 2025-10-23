#include <iostream>

using namespace std;

int main(){

    int nstd, grade;
    double avg = 0;
    do {
        cout<<"Enter the number of student between 1 and 100: ";
        cin>>nstd;
    }while (!(1 <= nstd && nstd <= 100 ));
    for (int i = 0; i < nstd; i++) {
        do {
            cout<<"\nEnter the grade of student number"<<i+1<<": ";
            cin>>grade;
        }while (!(0 <= grade && grade <= 100));
        avg = avg + (double)grade;
    }
    cout<<"Average grade for students is:";
    cout<<avg/nstd<<"\n";
    return 0;
}