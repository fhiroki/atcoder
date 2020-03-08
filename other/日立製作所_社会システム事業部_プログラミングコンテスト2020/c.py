import networkx as nx
import matplotlib.pyplot as plt

N = int(input())

edges = []
for i in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))

G = nx.Graph()
G.add_edges_from(edges)

nx.draw_networkx(G)
plt.show()
