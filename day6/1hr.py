# Enter your code here. Read input from STDIN. Print output to STDOUT
numofop=int(input())
s=""
prev=[]
count=0
for i in range(numofop):
    op=input()
    if(op[0]=='1'):
        prev.append(s)
        count=count+1
        op=op.split(" ")
        s=s+op[1]
    elif op[0]=='2':
        op=op.split(" ")
        num=int(op[1])-1
        prev.append(s)
        count=count+1
        s=s[:-num]
    elif op[0]=='3':
        op=op.split(" ")
        num=int(op[1])-1
        print(s[num])
    else:
        s=prev[count-1]
        count=count-1

        
