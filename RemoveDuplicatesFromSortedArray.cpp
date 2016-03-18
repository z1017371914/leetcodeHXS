class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       int begin =0,end =0;
       for(end=0;end<nums.size();end++){
           nums[begin++] = nums[end];
        
           while(end<nums.size()-1&&nums[end]==nums[end+1]){
               end++;
           }
       }
       return begin;
    }
};
