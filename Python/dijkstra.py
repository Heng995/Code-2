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
    'S': {'A': 6, 'B': 2},
    'A': {'Fn': 1},
    'B': {'A': 3, 'C':2, 'Fn': 5},
    'C': {'Fn':1},
    'Fn': {}
}

print('最短路徑:')
dijk('S')
