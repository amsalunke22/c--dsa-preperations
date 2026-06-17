#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int>mp;
        for(char c: s){
            mp[c]++;
        }
        for (char c: t){
            mp[c]--;
        }

        for(auto x : mp)
        {
        if(x.second != 0)
            return false;
        }
    return true;
        }
};

int main(){
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool output = sol.isAnagram(s,t);
    cout <<"Output:" << output;
    return 0;
}