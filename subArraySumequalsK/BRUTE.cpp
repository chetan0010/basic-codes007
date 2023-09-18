class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            int s=nums[i];
            if(s==k)
                c++;
            for(int j=i+1;j<nums.size();j++)
            {
                s+=nums[j];
                if(s==k)    c++; 
            }
        }
        return c;  
    }
};
