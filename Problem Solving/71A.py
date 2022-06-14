n = int(input())

for i in range(0,n):
	x = str(input())
	if(len(x)>10):
		print(x[0],end="")
		print(len(x)-2,end="")
		print(x[len(x)-1],end="\n")
	else:
		print(x)
	
