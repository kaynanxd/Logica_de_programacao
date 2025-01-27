a = int (input('digite o numero de diretores:'))
b = int (input('digite o tempo maximo da reuniao :'))
intervalo = a-1

if (a<1) or (a>100) or (b>1000) or (b<a) :
    print("erro")

else : 
    b = (b-intervalo)//a
    print(f'o numero de minutos por diretor sera{b}')
