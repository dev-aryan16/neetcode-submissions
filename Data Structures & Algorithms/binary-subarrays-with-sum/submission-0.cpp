class Solution {
public:
    int func(vector<int>&nums,int goal){
        if(goal<0){
            return 0;
        }
        int n=nums.size();
        int l=0; int cnt=0; int sum=0;
        for(int r=0; r<n; r++){
            sum=sum+nums[r];

            while(sum>goal){
                sum=sum-nums[l];
                l++;
            }

            cnt=cnt+r-l+1;
            // saari subarrays ka cnt maintain karega yeh variable
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums,goal)-func(nums,goal-1);
    }
};