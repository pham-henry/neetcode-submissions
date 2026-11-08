from collections import Counter 
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # use a hashtable, increment letter count for first string, decrement letter count for second string
        # how? idr
        # using python cheat sheet, ig a counter would be better for this case then, which is just a specialized dictionary

        # ctr = Counter(s)
        # ctr.subtract(t)

        # if ctr.values() == 0: 
        #     return True

        # return False

        # Im dumb just count both and then compare the counters

        return Counter(s) == Counter(t)
        