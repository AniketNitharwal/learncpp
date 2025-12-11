#include<bits/stdc++.h>
using namespace std;
int main () {
    multimap<int ,int>mp;
    for (int i =0;i<=5;i++)
    {
        mp.insert({i,i*10});

    }
    mp.insert({4,40});

    cout << "Elements present in multimap : "<<endl;
    cout << "key Elements"<< endl;
    for (auto it =mp.begin(); it !=mp.end();it++){
    cout << it -> first << "\t"<<it -> second << endl;
}
 int n=2;
 if (mp.find(2) != mp.end())
 cout <<n << "is present in multimap "<< endl;

    mp.erase(mp.begin());
    cout << "elements after dealating the first elements : "<< endl;
    cout << "Key Elements : "<< endl;
    for (auto it =mp.begin(); it !=mp.end();it++){
    cout << it -> first << "\t"<<it -> second << endl;
}
cout << "The size of the multimap is : "<< mp.size()<<endl;
if (mp.empty() == false)
cout << "the multimap is not empty "<< endl;
else 
cout << "the multimap is empty " << endl;
mp.clear();
cout<< "size of the multimap after clearing all the elements : "<< mp.size() << endl;
}