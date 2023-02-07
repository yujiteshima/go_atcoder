h,w=map(int,input().split())
hh = []
hr = []
hhw = [0 for i in range(w)]
hrc = [0 for i in range(w)]

for i in range(h):
  cnt = 0
  s = list(input())
  for j in range(w):
    c = s[j]
    if c=="#":
      cnt += 1
      hhw[j] += 1
  hh.append(cnt)

for i in range(h):
  cnt = 0
  t = list(input())
  for j in range(w):
    c = t[j]
    if c=="#":
      cnt += 1
      hrc[j] += 1
  hr.append(cnt)

hhw.sort()
hrc.sort()

if hh == hr and hhw == hrc:
  print("Yes")
else:
  print("No")