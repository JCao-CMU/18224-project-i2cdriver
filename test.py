arr = [1 if digit=='1' else 0 for digit in bin(0x49)[2:]]
while len(arr) < 8:
    arr.insert(0, 0)
print(bin(0x49))
print(arr)