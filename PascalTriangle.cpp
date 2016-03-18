class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vvec;
        vector<int> temp;
        if(numRows<0)
            return vvec;
        
        for(int i=0;i<numRows;i++){
            temp.push_back(1);
            
            for(int j=1;j<i;j++){
                temp[j]=vvec[i-1][j]+vvec[i-1][j-1];
                
            }
            vvec.push_back(temp);
           //temp.clear();
        }
        return vvec;
    }
};
