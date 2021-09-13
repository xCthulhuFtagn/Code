matrix = [
    # [0, 12, 5, 999, 22],
    # [7, 0, 11, 999, 10],
    # [14, 7, 0, 999, 17],
    # [19, 12, 5, 0, 4],
    # [15, 8, 1, 999, 0]
    [0, 7, 9, 999, 999, 14],
    [7, 0, 10, 15, 999, 999],
    [9, 10, 0, 11, 999, 2],
    [999, 15, 11, 0, 6, 999],
    [999, 999, 999, 6, 0, 9],
    [14, 999, 2, 999, 9, 0]
]
n = 6
path = [9999]*n
path[0] = 0
d = set()

# n = int(input())

# for i in range(n):
#     matrix.append(list(map(int, input().split())))
# print(*matrix)
index = 0
i = 0
while len(d)!=n:
    min_ = 999
    for j in range(n):
        if j not in d and i != j:
            if min(min_, matrix[index][j]) != min_:
                min_ = min(min_, matrix[index][j])
                i = j
            path[j] = min(path[j], matrix[index][j] + path[index])
    d.add(index)
    index = i

print(path)