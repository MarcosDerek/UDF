"""
7.	Escreva um programa que solicite ao usuário um número inteiro e um número real e 
ao final apresente na tela os dois números informados formatando com duas casas decimais somente 
o número real da seguinte forma: "Voce informou os numeros N e X.YY" 
"""

intNum = int(input("Digite um numero inteiro: "))
floatNum = float(input("Digite um numero real: "))
print("Voce informou os numeros {} e {:.2f}".format(intNum, floatNum))
