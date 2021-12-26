n = int(input("Input number to check the total set bit :"))
cnt = 0
for i in range(31):
    if (n>>i) & 1 == 1:
        cnt += 1
print(cnt)