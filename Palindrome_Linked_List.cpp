/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL) {
            fast = fast->next;
            if(fast->next != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;   
    }

    ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr) {
        //base case 
          if(curr == NULL) {
            return prev;
        } 

        // 1 case humane solve kr lia 
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;

        ListNode* recursionAns = reverseUsingRecursion(prev,curr);
        return recursionAns;

    }

    bool compareList(ListNode* head, ListNode* head2) {
        while(head != NULL && head2 != NULL) {
            if(head->val != head2->val) {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;

    }

    bool isPalindrome(ListNode* head) {
        // break into 2 halfes
        ListNode *midNode = middleNode(head);
        ListNode *head2 = midNode->next;
        midNode->next = NULL;

        // reverse 2nd half
        ListNode* prev = NULL;
        ListNode* curr = head2;

        head2 = reverseUsingRecursion(prev,curr);

        // compare both halfes
        bool ans = compareList(head,head2);
        return ans;

        
    }
};
