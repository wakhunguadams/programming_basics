cheese = ['cedar','edam','scam']
empty = []
print(cheese,empty)
print("edam" in cheese)
for e in cheese:
    print(e)
empty.append('hello')
print(empty)

def dellete_tail(t):
    del t[2]
dellete_tail(cheese)

print(cheese)
cheese.append('adams')
print(cheese)
cheese.sort()
print(cheese)
