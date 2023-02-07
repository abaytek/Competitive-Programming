def has_cycle(head):
    unique_num = set()
    while head is not None:
        if head in unique_num:
            return 1
        unique_num.add(head)
        head = head.next
    return 0
