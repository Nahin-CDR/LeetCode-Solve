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

//Solver : Nahin the Coder
//Date : 16-02-2022

class Solution {
    
public:
    
    ListNode* swapPairs(ListNode* head) {
       
        ListNode *myHead = NULL;
        ListNode *temp = NULL;
        
        myHead = head;
        temp = head;
        
        int cnt = 1;
        
        vector<int>odd;
        vector<int>even;
        
        while(head)
        {
            if(cnt%2 != 0)
            {
                 odd.push_back(head->val);
            }
            else
            {
                even.push_back(head->val);
            }
            cnt++;
            head = head->next;
        }
        
        int oddCount = 0;
        int evenCount = 0;
        bool check = true;
        
        int odLen = odd.size();
        int evLen = even.size();
        
        while(temp != NULL)
        {
            if(check == true)
            {
                if(evLen>0)
                {
                    int value = even[evenCount++];
                    temp->val = value;
                    check = false;
                    evLen--;
                }
                else
                {
                    int value = odd[oddCount++];
                    temp->val = value;
                    check = false;
                }
        
            }
            else
            {
               if(odLen>0)
               {
                    int value = odd[oddCount++];
                    temp->val = value;
                    check = true;
               }
            }
            
            temp=temp->next;
        }
        
        
        return myHead;
    }
};
