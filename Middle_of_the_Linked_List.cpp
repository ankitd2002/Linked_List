// 876. Middle of the Linked ListGiven the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

//Input: head = [1,2,3,4,5]
//Output: [3,4,5]
//Explanation: The middle node of the list is node 3.

//Input: head = [1,2,3,4,5,6]
//Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

//Constraints:
//The number of nodes in the list is in the range [1, 100].
// 1 <= Node.val <= 100



// solution 1: 
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
   int getLength(ListNode* head) {
       int len = 0;
       ListNode* temp = head;
       while(temp != NULL) {
           len++;
           temp = temp->next;
       }
       return len;
   }
    ListNode* middleNode(ListNode* head) {
        int n = getLength(head);
        int position = n/2 + 1;
        int curPosition =1;
        ListNode* temp = head;

        while(curPosition != position) {
            curPosition++;
            temp = temp->next;
        }

        return temp;
        
    }
};

// solution 2;

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
   int getLength(ListNode* head) {
       int len = 0;
       ListNode* temp = head;
       while(temp != NULL) {
           len++;
           temp = temp->next;
       }
       return len;
   }
    ListNode* middleNode(ListNode* head) {
        int n = getLength(head);
        int position = n/2 + 1;
        ListNode* temp = head;

        while(position != -1) {
            position --;
            temp = temp->next;
        }

        return temp;
        
    }
};

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

        while(fast != NULL) {
            fast = fast->next;
            if(fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;   
    }
};
