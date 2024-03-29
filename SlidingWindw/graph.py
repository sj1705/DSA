from collections import defaultdict

def dfs(node, parent, g):
    total = 1
    for child in g[node]:
        if child != parent:
            total += dfs(child, node, g)
    return total

def getMinOperations(k, g_nodes, g_from, g_to):
    g = defaultdict(list)
    for u, v in zip(g_from, g_to):
        g[u].append(v)
        g[v].append(u)
    operations = dfs(2, 0, g) - 1  # Start DFS from node 2 as it's the center of the star
    return (operations + k - 1) // k


# Example usage:
k = 3
g_nodes = 6
g_from = [2, 2, 2, 3, 4]
g_to = [1, 6, 3, 5, 3]

result = getMinOperations(k, g_nodes, g_from, g_to)
print(result)
