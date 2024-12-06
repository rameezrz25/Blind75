/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        //agar root hi nul hua toh kya cycle hoga ya single node
        if(head == nullptr || head -> next == nullptr)
            return false;
        
        // ek slow pointer jo ek kadam bhagega aur ek fast ponter jo do kadam bhagega
        ListNode *slowPtr = head;
        ListNode *fastPtr = head;

        //tab tak jab tak fast wala null ya n-1 na ho && isliye taki shortcircuit lag jaye aur do baar next na ho

        while(fastPtr != nullptr && fastPtr -> next != nullptr){
            slowPtr = slowPtr -> next;
            fastPtr = fastPtr -> next -> next;
            //pehle bhagana aage fir equal check krna nahi toh hmesh true hoga
            if(fastPtr == slowPtr)
                return true;
        }
        return false;
    }
};