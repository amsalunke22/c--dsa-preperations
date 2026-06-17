    #include <iostream>
    #include <vector>
    using namespace std;

    class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            for(int i = 0 ; i < nums.size(); i++){
                for (int j=i+1 ; j < nums.size(); j++){
                    if(nums[i]==nums[j]){
                        return true ;
                    }
                }
            }
            return false;
        }
    };
    int main(){
        // vector<int> nums = {1,2,3,4,2};
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
        Solution s;
        bool output = s.containsDuplicate(nums);
        cout << "Output:" << output;
        return 0;
    }