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
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
        if(firstHead==NULL || secondHead==NULL){
		return 0;
	} 
	ListNode *a=firstHead;
	ListNode *b=secondHead;

	while(a!=b){
		a=a==NULL ? secondHead : a->next;
		b=b==NULL ? firstHead : b->next;
	}
	return a;

    }
};