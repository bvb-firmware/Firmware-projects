
a=input('enter any string with spaces')
print(a)
a=a.split();
l=len(a)
i=0;
while(i<l):
	a[i]=a[i][-1]+a[i][1:-1]+a[i][0]
	i=i+1;

print(a)




