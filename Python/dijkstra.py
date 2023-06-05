import sys

def dijkstra(graph, start):

    distance = {node: sys.maxsize for node in graph}
    distance[start] = 0


    visited = set()

    while len(visited) < len(graph):

        current_node = None
        for node in graph:
            if node not in visited and (current_node is None or distance[node] < distance[current_node]):
                current_node = node


        visited.add(current_node)
        for neighbor, weight in graph[current_node].items():
            if distance[current_node] + weight < distance[neighbor]:
                distance[neighbor] = distance[current_node] + weight

    return distance

def dijk(start_node):
    distances = dijkstra(graph, start_node)

    for node, distance in distances.items():
        print(f"{start_node} 到 {node} 的距離為 {distance}",)
    print()


graph = {
    '0': {'1': 4, '7': 8},
    '1': {'0': 4, '2': 8, '7': 11},
    '2': {'1': 8, '3': 7, '5': 4, '8':2},
    '3': {'2': 7, '4': 9, '5': 14},
    '4': {'3': 9, '5': 10},
    '5': {'2': 4, '3': 14, '4': 10, '6':2},
    '6': {'5': 2, '7': 1, '8': 6},
    '7': {'0': 8, '1': 11, '6': 1, '8': 7},
    '8': {'2': 2, '6': 6, '7': 7}
}

print('最短路徑:')
dijk('0')
