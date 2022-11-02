class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # 雜湊表
        dct = {}
        for i, v in enumerate(nums):
            if target - v in dct:
                return [dct[target - v], i]
            dct[v] = i
    
    twoSum([1 2 3 4 5], 6)
    print(twoSum)
