#Write a function that takes an integer and returns the number of 1 bits it has.

def bitCounter(A):
    bit = []
    while A > 0:
        rem = A % 2
        A = A // 2
        bit.append(rem)
    return bit.count(1)
print(bitCounter(11))