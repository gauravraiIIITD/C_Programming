file=open("C:\\Users\\Gaurav\\Desktop\\abc.txt")
data=file.readlines()
blocked=["facebook","wwe","twitter"]
for i in range(0,len(data)):
    line=data[i].split('::')
    line2=line1[-1].split('.')
    if line2[1] in blocked:
        print("user with id",line[1],"and IP",line[3],"is blocked as it is using",line2[1])