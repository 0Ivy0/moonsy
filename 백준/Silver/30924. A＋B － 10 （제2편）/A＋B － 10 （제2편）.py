import random

list = []
n = 0

for a in range(1, 9999):
  n = random.randint(1, 10000)
  while n in list:
    n = random.randint(1, 10000)
  list.append(n)
  print("? A", n, flush=True)
  wa = int(input())
  if wa == 1:
    A = n
    break

list = []

for b in range(1, 9999):
  n = random.randint(1, 10000)
  while n in list:
    n = random.randint(1, 10000)
  list.append(n)
  print("? B", n, flush=True)
  wa = int(input())
  if wa == 1:
    B = n
    print("!", A + B)
    break