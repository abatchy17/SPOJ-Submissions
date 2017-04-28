size = int(raw_input())
counter = 0

while counter != size:
    counter = counter + 1
    num = int(raw_input())
    res = 0
    x = 5
    while num >= x:
        res = res + num / x
        x = x * 5
    print res