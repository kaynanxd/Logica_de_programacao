a = int (input('digite o 1 angulos do triangulo:'))
b = int (input('digite o 2 angulos do triangulo:'))
c = int (input('digite o 3 angulos do triangulo:'))

if (a or b or c)<0 or (a or b or c)>180 :
    print("erro")
elif (a == b == c):
    print("equilateral")
elif (a==b or a==c or c==a):
    print("isosceles")
else :  print("scalene")
