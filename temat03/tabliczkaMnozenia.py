print("{:4s}".format("    |"), end='')
for x in range(1, 11):
    print("{:4d}".format(x), end='')
print("")
print("---------------------------------------------")
for row in range(1, 11):
    print("{:4d}".format(row), "|", sep="", end='')

    for column in range(1, 11):
        print("{:4d}".format(column * row), end='')
    print("")
