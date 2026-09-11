class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    stack<int> st;
    for (auto it : nums) {
        st.push(it);
    }

    stack<int> keep;
    while (!st.empty()) {
        if (st.top() == val) {
            st.pop();
        } else {
            keep.push(st.top());
            st.pop();
        }
    }

    int i = 0;
    while (!keep.empty()) {
        nums[i] = keep.top();
        keep.pop();
        i++;
    }

    return i;
}
};