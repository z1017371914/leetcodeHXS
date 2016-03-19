class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool arr[1000000]={false};
        memset(arr,false,1000000*sizeof(bool));
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]]==true)
                return true;
            else
                arr[nums[i]] = true;
        }
        return false;
    }
};
