n = 5
while n > 0:
    print(n)
    n = n - 1
print("done")

while True:
    line = input('>')
    if line == 'done':
        break
    print(line)
print("done")

friends = ['joseph','glen','s']
for fri in friends:
    print('hello dear friend',fri)
print('done')   

total = 0
count = 0
for itervar in [3, 41, 12, 9, 74, 15]:
     count = count + 1
     total = total + itervar
     print('total=', total)
     print('Count: ', count)


