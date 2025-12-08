// pass by value means copy of the variable for safety 

#include<iostream>
using namespace std;
void modify(int a )
{
    a = a+10;
}

int main ()
{
    int x=5;
    modify(x);
    cout << x << endl;
    return 0;
}
