// 83. Remove Duplicates from Sorted List
// Easy
// Topics
// premium lock icon
// Companies
// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,1,2]
// Output: [1,2]
// Example 2:


// Input: head = [1,1,2,3,3]
// Output: [1,2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted.
//  */
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
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, bool> seen;
        ListNode* current = head;
        ListNode* previous = nullptr;

        while (current != nullptr) {
            if (seen[current->val]) {
                previous->next = current->next;
            } else {
                seen[current->val] = true;
                previous = current;
            }
            current = current->next;
        }

        return head;
    }
};