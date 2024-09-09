flag = True
n = int(input())
for i in range(n):
  str = input()
  if str == "Never gonna give you up" or str == "Never gonna let you down" or str == "Never gonna run around and desert you" or str == "Never gonna make you cry" or str == "Never gonna say goodbye" or str == "Never gonna tell a lie and hurt you" or str == "Never gonna stop":
    continue
  else:
    flag = False
if flag == True:
  print("No")
else:
  print("Yes")