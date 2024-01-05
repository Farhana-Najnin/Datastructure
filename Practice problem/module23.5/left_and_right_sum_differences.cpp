class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        vector<int>v(nums.size());
        if(nums.size()==1){
            return v;
        }
       int rs=0;
         for(int i=nums.size()-1;i>=0;i--){

            v[i]=rs;
            rs+=nums[i];

        }

        int ls=0;
        for(int i=0;i<nums.size();i++){

            v[i]=abs(v[i]-ls);
            ls+=nums[i];

        }
        return v;
    }
};
