matrix = [
    # [0, 12, 5, 999, 22],
    # [7, 0, 11, 999, 10],
    # [14, 7, 0, 999, 17],
    # [19, 12, 5, 0, 4],
    # [15, 8, 1, 999, 0]
    [0, 999, -2, 999],
    [4, 0,  3, 999],
    [999, 999, 0, 2],
    [999, -1, 999, 0]
]
n = 4
# n = int(input())

# for i in range(n):
#     matrix.append(list(map(int, input().split())))
print(*matrix)
for j in range(n):
    for i in range(n):
        if i != j:
            for k in range(n):
                if j != k:
                    matrix[i][k] = min(matrix[i][k], matrix[i][j] + matrix[j][k])

print(*matrix)
