def goodPair(A, B):
    for i in range(len(A)-1):
        if A[i] + A[i+1] == B:
            return 1
    return 0

A = [1,2,3,4]
print(goodPair(A, 6))