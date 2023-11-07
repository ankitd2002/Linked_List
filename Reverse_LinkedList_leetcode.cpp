// leetcode problem 206. Reverse Linked List  Given the head of a singly linked list, reverse the list, and return the reversed list.

//  Example 1: Input: head = [1,2,3,4,5]
//             Output: [5,4,3,2,1]

//  Example 2: Input: head = [1,2]
//              Output: [2,1]

// Example 3:  Input: head = []
//             Output: []

// Iterative solution // 
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;

// Recursive solution // 
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        return reverseUsingRecursion(prev,curr);
        
    }
};

    return head;

    }
};
