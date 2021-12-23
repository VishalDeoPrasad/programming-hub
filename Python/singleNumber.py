#Given an array of integers A, every element appears twice except for one. Find that single one.
def singleNumber(lst):
    unique = 0
    for n in lst:
        unique ^= n
    print("Unique Number is =", unique)
    print("At an Index =",lst.index(unique))
singleNumber([1,2,1,3,2,4,3,4,5])
