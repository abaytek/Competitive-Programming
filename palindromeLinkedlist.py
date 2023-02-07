# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        temp = head
        ans = []
        while temp:
            ans.append(temp.val)
            temp = temp.next
        i = 0
        j = len(ans) - 1
        while i < j:
            if ans[i] == ans[j]:
                i,j = i+1, j-1
            else:
                return False
        return True
    
