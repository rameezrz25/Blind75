class Solution {
public:
    int hammingWeight(int n) {
        // The function returns no of set bits in a number
        return __builtin_popcount(n);
        
    }
};