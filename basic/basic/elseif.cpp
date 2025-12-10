#include<iostream>
using namespace std;
int main () {
    int mark =54;

    if (mark<25){
        cout<< "grade : F"<<endl;
    }
    else if (mark>=25&&mark<=44) {
        cout<< "grade : E"<< endl;
    }
    else if (mark>=25&&mark<=44) {
        cout<< "grade : E"<< endl;
    }
    else if (mark>=45&&mark<=49) {
        cout<< "grade : D"<< endl;
    }
    else if (mark>=50&&mark<=59) {
        cout<< "grade : C"<< endl;
    }
    else if (mark>=60&&mark<=69) {
        cout<< "grade : B"<< endl;
    }
    else if (mark>=70) {
        cout<< "grade : A"<< endl;
    }
    else {
        cout<< "invalid marks"<< endl;

    }
    return 0;

}