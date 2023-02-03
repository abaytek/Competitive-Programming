# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp, length = head, 0

        # Get the length the linkedlist
        while temp:
            temp = temp.next
            length = length + 1
        
        if length == n:
            return head.next

        # iterate and go before the element to be removed
        # declare a pointer to point the head
        start = head
        for _ in range(length -n -1):
            start = start.next
        start.next = start.next.next
        return head
        



        #  FAST SLOW POINTER
        
        # fast, slow = head, head
        # for _ in range(n): 
        #     fast = fast.next
        # if not fast: 
        #     return head.next
        # while fast.next: 
        #     fast, slow = fast.next, slow.next
        # slow.next = slow.next.next
        # return head
        
