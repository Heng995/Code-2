#05.請寫一個遞迴程式qs(List)，用quick sort方法排序一個串列的整數

def qs(List):
    if len(List) <= 1:
        return List
    else:
        pivot = List[0]
        left = [x for x in List[1:] if x <= pivot]
        right = [x for x in List[1:] if x > pivot]
        return qs(left) + [pivot] + qs(right)

List05 = [1, 7, 3, 6, 9, 2, 10]
print("排序後為：", qs(List05))