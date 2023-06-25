n1 = float(input("Digite a nota da N1: "))
n2 = float(input("Digite a nota da N2: "))

mf = (2*(n1) + 3*(n2))/5

print(f"A média do aluno é {mf}")
if mf > 7:
    print("O aluno está aprovado.")
elif mf >= 3 and mf < 7:
    print("O aluno está reprovado e tem direito a AF  ")
    avf = float(input("Digite a nota da AF: "))
    if (avf + mf)/2 >= 5:
        print("O aluno está aprovado.")
    else:
        print("O aluno foi reprovado na avaliação fianl. ")
else:
    print("O aluno foi reprovado")
