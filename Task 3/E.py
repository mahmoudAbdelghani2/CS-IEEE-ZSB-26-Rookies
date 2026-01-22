a, b = map(int, input().split())
s1=""
s2=""
for i in range(a):
    s1+=str(b)

for j in range(b):
    s2+=str(a)

if s1>s2:
    print(s2)
else:
    print(s1)

