# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0 # carry value initially 0
        result = ListNode(0) # pointes at zero node first
        pointer = result

        while (l1 or l2 or carry):
            first_num = l1.val if l1 else 0
            second_num = l2.val if l2 else 0

            summation = first_num + second_num + carry
            num = summation % 10 # extract the last digit from summation
            carry = summation // 10 # extract the first digit from summation

            pointer.next = ListNode(num) # pointer should point to node value of the number

            pointer = pointer.next # move a head 
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return result.next

