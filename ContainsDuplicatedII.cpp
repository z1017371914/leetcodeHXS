class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int arr[100000]={-1};
        memset(arr,-1,sizeof(int)*100000);
        for (int i=0; i<nums.size(); i++) {
            if (arr[nums[i]]!=-1&&i-arr[nums[i]]<=k) {
                return true;
            }
            else{
                arr[nums[i]] = i;
            }
        }
        return false;
    }
};
