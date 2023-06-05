def find_lowest_cost_node(costs):
    lowest_cost = float ("inf")
    lowest_cost_node = None
    for node in costs:
        cost = costs[node]
        if cost < lowest_cost and node not in processed:
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node

costs = {
    'A':5,
    'B':3,
    'D':7
}

processed = []

print(find_lowest_cost_node(costs))