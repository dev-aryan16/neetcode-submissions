class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0; i<m; i++){
            temp.push_back(nums1[i]);
        }
        for(int j=0; j<n; j++){
            temp.push_back(nums2[j]);
        }

        sort(temp.begin(),temp.end());

        int d=temp.size();

         if(d % 2 != 0) {
        return temp[d / 2];
    }
    else {
        return (temp[d / 2 - 1] + temp[d / 2]) / 2.0;
    }

    }
};
