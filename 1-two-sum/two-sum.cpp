class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;
        // har number pe difference calculate kr k add krte jao aur
        // sath sath check krte chalo ki wo map me hai ki nahi
        for(int i = 0; i < nums.size(); i++){
            int compliment =  target - nums[i];
            if(mp.find(compliment) != mp.end()){
                return {mp[compliment], i};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
       }
};