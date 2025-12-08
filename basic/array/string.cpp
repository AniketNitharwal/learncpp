//length of a string
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int findlength(string s){
    return s.length();
}
};

int main ()
{
    Solution obj;
    string s = "abcdef";
    cout << obj.findlength(s)<<endl;
    return 0;
    
}