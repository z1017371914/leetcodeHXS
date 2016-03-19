class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.size()==0) {
            return res;
        }
        int end =0,start =0;
        while (end<nums.size()) {
            if (end<nums.size()-1&&nums[end]+1==nums[end+1]) {
                end++;
            }
            else{
                if (start == end) {
                    res.push_back(to_string(nums[start]));
                }else{
                    res.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
                }
                end++;
                start=end;
            }
        }
        return res;
    }
    
};
