import math

entradas = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

for i in (entradas):
    a=((2**i)/(i**2))-i+10
    b=(10*i)+450
    c=10+(2*(i**2))+i
    d = 500 + 20 * math.log2(i)

    print(a)
    print(b)
    print(c)
    print(d)
