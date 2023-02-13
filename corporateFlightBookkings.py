class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        arr = [0]*(n+1)
        for l, r, seats in bookings:
            arr[l-1]+= seats
            arr[r]-= seats

        return list(accumulate(arr[:-1]))
