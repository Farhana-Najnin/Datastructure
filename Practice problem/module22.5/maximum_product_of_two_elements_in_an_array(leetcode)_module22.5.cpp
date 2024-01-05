class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n1=(nums[0]-1)*(nums[1]-1);
        int n=nums.size();
        int n2=(nums[n-1]-1)*(nums[n-2]-1);
        if(n1>n2) return n1;
        else return n2;

    }
};
