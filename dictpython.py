l=[1,2,1,2,2]
d={}
for i in range(len(l)):
    i,d[i]=l[i],l.count(l[i])

    
print(d.values())
dict_values([2, 3])
print(d.keys())
dict_keys([1, 2])
