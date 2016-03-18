class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if (nums.size()<4) {
            return result;
        }
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                int begin = j+1;
                int end = nums.size()-1;
                while (begin<end) {
                    if (nums[i]+nums[j]+nums[begin]+nums[end]==target) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[begin]);
                        temp.push_back(nums[end]);
                        result.push_back(temp);
                        while ((begin<nums.size()-1)&&nums[begin]==nums[begin+1]) {
                            begin++;
                        }
                        while (end>0&&nums[end]==nums[end-1]) {
                            end--;
                        }
                        begin++;
                        end--;
                    }
                   else if (nums[i]+nums[j]+nums[begin]+nums[end]<target){
                        while ((begin<end)&&nums[begin]==nums[begin+1]) {
                            begin++;
                        }
                        begin++;
                    }
                   else{
                       while (begin<end&&nums[end]==nums[end-1]) {
                           end--;
                       }
                       end--;
                   }
                    
                }
                while(j<nums.size()-1&&nums[j]==nums[j+1])j++;
            }
            while(i<nums.size()-1&&nums[i]==nums[i+1])i++;
        }
        return  result;
    }
    
};
