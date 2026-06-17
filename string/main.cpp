#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    cout<<"size is:"<<vec.size()<<"\n";
    cout<< vec[0] << vec[1];
    return 0;
}