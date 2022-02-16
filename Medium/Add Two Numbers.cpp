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

 // Solver : Nahin the Coder
 // Date : 16-02-2022


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    int carry = 0;
	
	ListNode *ansHead = new ListNode;
        
	ListNode *temporary = ansHead;
	while(l1 != NULL or l2 != NULL or carry != 0){

        int firstNodeValue = 0;
		int secondNodeValue = 0;
		int sum = 0;
		if(l1 != NULL){
			firstNodeValue = l1->val;
			l1 = l1->next;
		}
		if(l2 != NULL){

			secondNodeValue = l2->val;
			l2 = l2->next;
		}
		sum = firstNodeValue+secondNodeValue+carry;
		if(sum>=10){

			int pushingValue = sum%10;
			carry = sum/10;
            //create a new Node
			ListNode *newNode = new ListNode;
			newNode->val = pushingValue;
			
            temporary->next = newNode;
			
            temporary = temporary->next;
			
		}
		else{

			int pushingValue = sum;
			carry = 0;
			ListNode *newNode = new ListNode;
			newNode->val = pushingValue;
			temporary->next = newNode;
			temporary = temporary->next;
			
		}
	}
	
	return ansHead->next;

    }
};
