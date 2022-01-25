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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *temp = NULL;
        temp = head;
        ListNode *ans = NULL;
        ans = head;

	    int cnt = 1;
	    int oddCount = 0;
	    int evenCount = 0;
        vector<int>odd;
	    vector<int>even;

	    while(head != NULL)
	    {
            if(cnt%2 != 0)
            {
                odd.push_back(head->val);
			    oddCount++;
            }
		    else
		    {
                even.push_back(head->val);
			    evenCount++;
		    }
		    head = head->next;
		    cnt++;
        }
	    int cp1 = 0;
	    int cp2 = 0;
	    while(temp!=NULL)
        {
            if(oddCount>0)
            {
                temp->val = odd[cp1++];
			    oddCount--;
            }
		    else if(evenCount>0 and oddCount <=0)
		    {
                temp->val = even[cp2++];
			    evenCount--;
		    }
		    temp = temp->next;
        }
        return ans;
    }
};
