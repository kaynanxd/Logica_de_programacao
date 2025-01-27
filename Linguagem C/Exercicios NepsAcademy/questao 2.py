a = int (input('digite a quantidade de ouro misturado:'))
b = int (input('agora digite a quantidade de prata misturado:'))

if a<0 and b==0:
  print("ouro puro")
elif a==0 and b>0:
  print("prata puro")
elif a>0 and b>0:
  print("liga de metal")
else:
 print("metal nao identificado")