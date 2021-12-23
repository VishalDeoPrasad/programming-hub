def goodPair(A, B):
    for i in range(len(A)-1):
        for j in range(i+1, len(A)):
            if A[i] + A[j] == B:
                return 1
    return 0
A = [1,2,3,4,5,8,6]
print(goodPair(A, 1))