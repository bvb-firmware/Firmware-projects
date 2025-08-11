#swap first and laast characters in each word

s="abc defg hijkl mn op qrst"
print('before:',s)
print(type(s))
s=s.split()
print(type(s))
print('before:',s)
c=len(s.split())
print(c)
i=0;
while(i<c):
	s=s.replace(s[i][0],s[i][-1])
	s=s.replace(s[i][-1],s[i][0])
	i=i+1

print('after:',s)
