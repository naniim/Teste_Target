import json

with open("dados.json") as my_json:
  dados = json.load(my_json)

minimo = dados[0]['valor']
maximo = dados[0]['valor']
media = 0
quantos = 0
for i in range (len(dados)):
  if(dados[i]['valor']<minimo):
    minimo = dados[i]['valor']
  if(dados[i]['valor']>maximo):
    maximo = dados[i]['valor']
  if(dados[i]['valor'] !=0):
    quantos+=1; media+=dados[i]['valor']
media /= quantos
quantos_acima_da_media = 0
for i in dados:
  if(i['valor']>media):
    quantos_acima_da_media+=1
print("O menor valor de faturamento ocorrido em um dia do mês foi: ", minimo)
print("O maior valor de faturamento ocorrido em um dia do mês foi: ", maximo)
print("O número de dias no mês em que o valor de faturamento diário foi superior à média mensal é:", quantos_acima_da_media)
