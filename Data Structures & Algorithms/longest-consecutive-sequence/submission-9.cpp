class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=1;
        if(n==0){
            return 0;
        }
        for(int i=0; i<n-1; i++){

        if (nums[i + 1] == nums[i]) {
            continue;
        }
        
            if(nums[i+1]-nums[i]==1){
                cnt++;
            }
            else{
                cnt=1;
            }
            
           maxi=max(cnt,maxi);
        }
        return maxi;
    }
};
