class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n , 1);
        vector<int> suffix(n , 1);
        vector<int> result(n , 1);
        //pehle prefix find out krenge fir suffix find out krenge
        // uske baad dono ko multiple kr k result
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] * nums[i - 1];
            suffix[n - i - 1] = suffix[n - i] * nums[n - i];
        }


        for(int i = 0; i < n; i++){
            result[i] = prefix[i] * suffix[i];
        }
        return result;
    }
};