s=input('enter any string with spaces\n')
print(s)
s=s.split()
l=len(s)
i=0;
while(i<l):
	s[i]=s[i][::-1]
	i=i+1
#i=0;
#while(i<l):
s=' '.join(s)
#	i=i+1
print(s)
