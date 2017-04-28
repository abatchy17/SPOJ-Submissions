size = int(raw_input())
counter = 0

while counter != size:
    counter = counter + 1
    line = raw_input().split(" ")
    num1 = line[0][::-1]
    num2 = line[1][::-1]
    res = str(int(str(int(num1)+int(num2))[::-1]))
    print res