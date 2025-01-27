a = int (input('para descobrir se o ano e bissexto digite ele:'))

if a<0 and a>9999  :
 print("ano invalido")

elif a%4 == 0 and(a%100 != 0) or (a%400 == 0)  :
 print ("sim")

else : 
  print("nao") 
