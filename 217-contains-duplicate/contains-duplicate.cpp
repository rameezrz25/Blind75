class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int> st;

        for(auto num : nums){

            // agar set find me last end mila  matlab nhi hai to insert kr do 
            if(st.find(num) == st.end()){
                st.insert(num);
            }
            // iska matlab hai pehle koi number
            else
                return true;
    }
        // loop complete ho gya matlab sare unique hi the
        return false;

        
    }
};