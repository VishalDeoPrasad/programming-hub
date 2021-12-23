A = 5
for i in range(1, A+1):
    if i%3 == 0 and i%5 == 0:
        A[i].replace("FizzBuzz" ) 
    elif i%3 == 0:
        A[i].replace("Fizz" ) 
    elif i%5 == 0:
        A[i].replace("Buzz" ) 
print(A)
