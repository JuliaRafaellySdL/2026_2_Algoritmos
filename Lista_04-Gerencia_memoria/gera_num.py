import random
import sys

n=int(sys.argv[1])

for i in range(n):
    num=random.randrange(n*10)
    print(num)

print(-1)