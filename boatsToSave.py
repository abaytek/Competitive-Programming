class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        left, right = 0, len(people) - 1
        no_boats = 0
        people.sort()
        while left <= right:
            if people[left]+people[right] <= limit:
                left += 1
                right -= 1
            else:
                right -= 1
            no_boats += 1
        return no_boats

        
