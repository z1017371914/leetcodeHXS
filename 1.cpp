/*
Given an array of integers, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution.
Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/
bool compare(pair<int, int>a,pair<int, int>b){
    return a.first<b.first;
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=(int)nums.size()-1;
        vector<int> res;
        pair<int,int> temp;
        vector<pair<int,int>> pairNums;
        for (int i=0; i<nums.size();i++) {
            temp.first=nums[i];
            temp.second=i;
            pairNums.push_back(temp);
        }
        sort(pairNums.begin(), pairNums.end(),compare);
        i=0;
        while(i<j){
            if(pairNums[i].first+pairNums[j].first==target){
                res.push_back(min(pairNums[i].second,pairNums[j].second));
                res.push_back(max(pairNums[i].second,pairNums[j].second));
                break;
            }
            else if(pairNums[i].first+pairNums[j].first<target){
                
                i++;
            }
            else{
                
                j--;
            }
        }
        return res;
    }
    
};
