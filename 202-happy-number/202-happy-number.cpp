class Solution {
public:
    int sumOfSquare(int n)
    {
        int sum = 0;
        while(n)
        {
            int digit =  n%10;
            sum += digit*digit;
            n /= 10;  
        }
        return sum;
    }
    bool isHappy(int n) { 
        set<int> set;
        while(n)
        {
            if(n == 1)
                return true;
            n = sumOfSquare(n);
            if(set.find(n) == set.end())
                set.insert(n);
            else return false;
            
                
        }
        return false;
    }
};