def most_frequent(input):
    if(type(input) != str):
        print("function doesn't work with", type(input))
    else:
        num = dict()
        for el in input: num[el] = num.get(el, 0) + 1
        ans = dict(sorted(num.items(), reverse=True))
        for el in ans : print(el)

a = 3
b = "sas"
most_frequent(a)
most_frequent(b)