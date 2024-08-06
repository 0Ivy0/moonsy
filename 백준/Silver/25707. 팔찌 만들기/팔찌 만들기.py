s = 0
n = int(input())
arr = list(map(int, input().split()))
arr.sort()
s += arr[n - 1] - arr[0]
for i in range(1, n):
  s += arr[i] - arr[i - 1]
print(s)