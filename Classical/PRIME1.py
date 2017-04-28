size = int(raw_input())
counter = 0

while counter != size:
    counter = counter + 1
    line = raw_input().split(" ")
    num1 = int(line[0])
    num2 = int(line[1])

    for number in range(num1, num2+1):
        isprime=True
        
        for i in range(2, number):
            if i * i > number:
                break
            if number%i == 0:
                isprime=False
                break
        
        if isprime and number != 1:
            print number
        
    print "\n"