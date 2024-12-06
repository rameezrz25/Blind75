class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        int i;
        for(i = 0; i < nums.size(); i++)
            result ^= nums[i] ^ i;
        result ^= i;
        return result;
        
    }
};