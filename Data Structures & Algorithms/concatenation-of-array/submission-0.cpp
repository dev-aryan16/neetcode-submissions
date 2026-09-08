class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int k=2*n;
        vector<int> result(k);
        for(int i=0; i<n; i++){
            result[i]=nums[i];
        }
        for(int i=n; i<k; i++){
            result[i]=nums[i-n];
        }
        return result;
    }
};