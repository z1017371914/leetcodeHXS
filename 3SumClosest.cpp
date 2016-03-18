class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>  result;
        if(nums.size()<3)
            return result;
        sort(nums.begin(),nums.end());
        for (int i=0; i< nums.size()-2; i++) {
            if(i>0&&nums[i]==nums[i-1])continue;
            findNumber(nums, i+1, nums.size()-1, nums[i], result);
        }
        return result;
    }
    void findNumber(vector<int>& nums,int begin,int end,int target,vector<vector<int>>  &result){
        while (begin < end) {
            if (nums[end]+nums[begin]==-target) {
                vector<int> temp;
                temp.push_back(target);
                temp.push_back(nums[begin]);
                temp.push_back(nums[end]);
               
                result.push_back(temp);
               // cout<<begin<<" "<<end<<endl;
                while(begin<end&&nums[begin]==nums[begin+1])begin++;
                while(begin<end&&nums[end]==nums[end-1])end--;
                begin++;
                end--;
            }
            else if(nums[end]+nums[begin]<-target){
                while(begin<end&&nums[begin]==nums[begin+1])begin++;
                begin++;
            }
            else{
                 while(begin<end&&nums[end]==nums[end-1])end--;
                 end--;
            }
        }
    }
};
