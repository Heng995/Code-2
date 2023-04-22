#07.請寫一個遞迴程式ss(List)，用selection sort方法排序一個串列的浮點數。
def ss(arr):
    if len(arr) == 1:
        return arr

    min_index = 0
    for i in range(1, len(arr)):
        if arr[i] < arr[min_index]:
            min_index = i

    arr[0], arr[min_index] = arr[min_index], arr[0]

    return [arr[0]] + ss(arr[1:])

arr07 = [3.4, 7.5, 1.2, 9,4, 4.9]
print(ss(arr07))
