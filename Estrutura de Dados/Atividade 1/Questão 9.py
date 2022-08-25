multiplos = []
for i in range(10):
    n = int(input(f"Digite um {i+1}°número: "))
    if n % 3 == 0:
        multiplos.append(n) 
for i in range(len(multiplos)):
    print(multiplos[i])

