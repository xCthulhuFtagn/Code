
tmp = input()
tmp = map(int,input().split(" | "))
N = len(tmp)
storage.append(tmp)
for i in range(N-1):
    tmp = map(int,input().split(" | "))
    if i % 2 != 0 :
        storage.append(tmp)
print(storage)
output = list(N)