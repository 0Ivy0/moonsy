t = 0
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
if (a < 0):
  t += -a * c
  t += d
  t += b * e
else:
  t += e * (b - a)
print(t)