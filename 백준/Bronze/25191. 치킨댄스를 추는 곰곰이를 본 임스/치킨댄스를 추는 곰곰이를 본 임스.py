n = int(input())
a, b = map(int, input().split())
wa = a // 2 + b
if (n >= wa):
  print(wa)
else:
  print(n)