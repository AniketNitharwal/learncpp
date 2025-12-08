// pass by reference means altering the actual variable not the copy it is more efficient

#include<iostream>
using namespace std;
void modify(int &a)
{
    a=a+10;

}
int main ()
{
int x=5;
modify(x);
cout << x << endl;
return 0;
}