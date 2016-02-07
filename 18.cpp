
/* 此答案超时 但是思路很好
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> path;
        if (nums.size()<4) {
            return  result;
        }
        sort(nums.begin(),nums.end());
        findFour(result,0,path,0,target,nums);
        return result;
    }
    void findFour(vector<vector<int>> &result,int index,vector<int> path,int curSum,int target,vector<int> nums){
        if (path.size()==4) {
            if (curSum==target) {
                result.push_back(path);
                return;
            }
        }
            for (int i=index; i<nums.size(); i++) {
                
                if(curSum+nums[i]>target)
                    return ;
                path.push_back(nums[i]);
                findFour(result,i+1,path,curSum+nums[i],target,nums);
                path.pop_back();
                while (i<nums.size()-1&&nums[i]==nums[i+1]) i++;
                
            }
        }
        
        
    
};*/
