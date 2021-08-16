class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        input_string = list(s)
        print(input_string)
        now_char = []
        answer = 0
        for i in input_string:
            if i not in now_char:
                now_char.append(i)
            else:
                if len(now_char) > answer:
                    answer = len(now_char)
                while now_char[0] != i :
                    now_char = now_char[1:]
                now_char = now_char[1:]
                now_char.append(i)
        if len(now_char) > answer:
            answer = len(now_char)
        return answer