class Solution:
    def reverseParentheses(self, s: str) -> str:
        # convert the given string into list to access each characters
        chars = list(s)
        stack = []
        ans = ''
        # iterate over the chars list and if char = "(" append the index to stack
        # else if pop the last index ( exist and reverse char in between ( and )
        for idx, char in enumerate(chars):
            if char == '(':
                stack.append(idx)
            elif char == ')':
                start = stack.pop()
                chars[start:idx] = chars[idx:start:-1]

        ans = ''.join(c for c in chars if c not in '()')
        return ans
                
            