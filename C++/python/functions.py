print(max("hello world"))
print(len("hello world"))
import math
degrees = 45
radians = degrees/360.0*2*math.pi
print(math.sin(radians))
print(math.sqrt(16))

import random
for i in range(10):
   x = random.random()
   print(x)

t = [1,2,3]
print(random.choice(t))

def print_lyrics():
    print("i have loved you only in my mind")
    print("but i know someday y'll come")
    print("feel this feeling i have for you inside")

print(print_lyrics())
def repeat_lyrics():
    print_lyrics()
    print_lyrics()
    print_lyrics()

repeat_lyrics()

def print_twice(bruce):
    print(bruce)
    print(bruce)

print_twice("you are very stupid")
