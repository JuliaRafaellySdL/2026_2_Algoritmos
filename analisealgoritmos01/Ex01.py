contagem_a = 0
contagem_b = 0
contagem_iguais = 0

for i in range(1, 500):
    ta = (100 * i) + 500
    tb = (2 * (i**2)) + 10
    
    if ta < tb:
        contagem_a += 1
    elif tb < ta:
        contagem_b += 1
    else:
        contagem_iguais += 1

print(f"'A é melhor' seria impresso {contagem_a} vezes.")
print(f"'B é melhor' seria impresso {contagem_b} vezes.")
print(f"'A e B são iguais' seria impresso {contagem_iguais} vezes.")

#Até 54 --> B
#Maior que 54 --> A