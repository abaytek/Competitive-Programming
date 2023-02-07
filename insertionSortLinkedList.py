# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy_head = ListNode()
        curr = head

        while curr:
            prev_pointer = dummy_head
            next_pointer = dummy_head.next

            while next_pointer:
                if curr.val < next_pointer.val:
                    break
                prev_pointer = prev_pointer.next
                next_pointer = next_pointer.next
            
            temp = curr.next
            curr.next = next_pointer
            prev_pointer.next = curr
            curr = temp
        return dummy_head.next



