class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result;

        // pair wala max heap declare kro baaki sb max heap automatical sort kr dega
        priority_queue<pair<int, int>> maxHeap;
        unordered_map<int, int> mp;
        //pehle map me store kro uski frequency
        for(auto num : nums){
            mp[num]++;
        }

        // heap me daalo pair k format me aur baaki sb wo dekh lega
        for(auto element : mp){
            maxHeap.push({element.second, element.first});
        }
        // K times nikalo uska top element
        while(k--){
            int res = maxHeap.top().second;
            result.push_back(res);
            maxHeap.pop();
        }

        return result;
    }
};