#04.請寫一個遞迴程式Hanoi(n)，列印出Hanoi Tower規則，將片由小到大的碟片，從”台北”柱子，經過所有”台北”、”台中”、”高雄”等3根柱子，最後搬到”高雄”柱子的過程。

def Hanoi(n, from_rod, to_rod, aux_rod):
    if n == 1:
        print("Move disk 1 from", from_rod, "to", to_rod)
        return
    Hanoi(n-1, from_rod, aux_rod, to_rod)
    print("Move disk", n, "from", from_rod, "to", to_rod)
    Hanoi(n-1, aux_rod, to_rod, from_rod)

n04 = 3
print("移動步驟如下：")
Hanoi(n04, '台北', '高雄', '台中')