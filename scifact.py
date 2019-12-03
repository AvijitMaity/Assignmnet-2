'''code to compute the factorial of a given integer n using scipy'''
from scipy.special import factorial
n=int(input("the number is : "))
print("the factorial of the number is : ",factorial(n));