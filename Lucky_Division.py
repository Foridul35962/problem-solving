a=input()
l=0
for i in a:
    if(i=='4' or i=='7'):
        l+=1
if(l==len(a)):
    print("YES")
else:
    b=int(a)
    if(b%4==0 or b%7==0 or b%44==0 or b%47==0 or b%74==0 or b%77==0 or b%444==0 or b%447==0 or b%474==0 or b%744==0 or b%477==0 or b%747==0 or b%774==0 or b%777==0):
        print("YES")
    else:
        print("NO")