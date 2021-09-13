INF = 999

matrix = [
    [0, 999, -2, 999],
    [4, 0,  3, 999],
    [999, 999, 0, 2],
    [999, -1, 999, 0]
]
n = 4
path = [999] * n
path[2] = 0

for a in range(n):
    for b in range(n):
        for c in range(n):
            path[b] = min(path[b], path[c] + matrix[c][b])
print(path)
