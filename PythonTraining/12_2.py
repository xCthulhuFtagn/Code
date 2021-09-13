f = (open("input.txt", "r")).read()
l = f.split('\n')
a = []
for el in l :
    a.extend(el.split())
anagrams = dict()
for el in a:
    srt = "".join(sorted(el))
    if(srt in anagrams.keys()):
        anagrams[srt].append(el)
    else :
        anagrams[srt] = [el]
print(anagrams)
new_way = (sorted(anagrams.items(), key = lambda i: len(i[1]), reverse=True))
print(new_way)