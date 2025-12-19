#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countdigit(int n)
{
    int cnt = (int )(log10(n+1));
    return cnt;

}
int main () {
    int N=329823;
    int digit = countdigit(N);
    cout << "Number of digit in N : "<< digit << endl;
    return 0;
    

}