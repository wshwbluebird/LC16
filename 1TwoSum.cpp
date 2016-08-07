#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int ,int> m;
        for(int i = 0 ; i <nums.size();++i){
            //cout<<nums[i]<<" : "<<i<<endl;
            m[nums[i]] = i;
        }
        for(int i = 0 ; i < nums.size();++i){
            if(m.find(target-nums[i])!=m.end()){
                ans.push_back(i);
                //cout<<i<<endl;
                //cout<<m[i]<<endl;
                ans.push_back(m[target-nums[i]]);
                return ans;
            }

        }
        return ans;
    }
};

int main(){
    vector<int> num = {2,3,6};
    Solution s;
    vector<int>  ans = s.twoSum(num,9);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;

    return 0;
}