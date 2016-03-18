class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec;
        for(int i=0;i<=rowIndex;i++){
            for(int j=vec.size()-1;j>0;j--){
                vec[j]=vec[j]+vec[j-1];
            }
            vec.push_back(1);
        }
        return vec;
    }
};
