fhand =open('mbox.txt')
print(fhand)
inp= fhand.read()
#searching in files
fhand = open('mbox.txt')
count = 0
for line in fhand:
    if line.startswith('from'):
        print(line)
