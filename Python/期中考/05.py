def qs(List):
    if len(List) <= 1:
        return List
    else:
        pivot = List[0]
        left = [x for x in List[1:] if x < pivot]
        right = [x for x in List[1:] if x >= pivot]
        return qs(left) + [pivot] + qs(right)