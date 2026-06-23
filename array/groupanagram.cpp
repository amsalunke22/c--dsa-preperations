#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> mp;

        for(string word : strs)
        {
            string temp = word;

            sort(temp.begin(), temp.end());

            mp[temp].push_back(word);
        }

        vector<vector<string>> result;

        for(auto x : mp)
        {
            result.push_back(x.second);
        }

        return result;
      
    }
};
int main(){

    Solution s;
    
vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

vector<vector<string>> result = s.groupAnagrams(strs);

    for(auto group : result)
{
    cout << "[ ";

    for(auto word : group)
    {
        cout << word << " ";
    }

    cout << "]" << endl;
}

    return 0;
}