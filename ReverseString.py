str = input("Input String")
rstr = list()
value = -1
for k in range(len(str)):
    rstr.append(str[value])
    value -= 1
print("".join(rstr))