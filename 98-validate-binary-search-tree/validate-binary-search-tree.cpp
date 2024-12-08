/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> result; 
    bool isStrictlyIncreasing(const std::vector<int>& vec) {
        for (size_t i = 1; i < vec.size(); ++i) {
            if (vec[i] <= vec[i - 1]) {
                return false;
            }
        }
        return true;
    }
    // result me inordr traversal ko daalo aur chekc karo ki array sorted hai ki nahi
    void helper(TreeNode* root){
        if(root == nullptr)
            return;

        helper(root -> left);
        result.push_back(root ->val);
        helper(root -> right);
        
    }
    bool isValidBST(TreeNode* root) {

        helper(root);
        /// is_sorted check krega ki vector sorted hai ki nahi
        return isStrictlyIncreasing(result);

    }
};