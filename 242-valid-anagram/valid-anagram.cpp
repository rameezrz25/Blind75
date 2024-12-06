class Solution {
public:
    bool isAnagram(string s, string t) {

        //agar sort kr denge sare words ko to sare asc me aa jaayenge
        //uske baaad bas compare kr do dono string 
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // ek shortcut hai check krne ka dono string same hai ki nahi
        return s == t;

        
    }
};