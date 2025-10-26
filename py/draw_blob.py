r = 5

for y in range(21):
    for x in range(30):
        if (x-14)**2/4 + (y-10)**2/1.25 < r**2:
            print("@", end='')
        else:
            print("-", end='')
    print()
