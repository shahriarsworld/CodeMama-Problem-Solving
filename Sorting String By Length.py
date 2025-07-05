# Problem Statement
# Write a program to create a function that returns an array of strings sorted by length in ascending order.

# Input
# The program will take an integer 
# N
# N as the length of an array. Then it will take the string values of the array 
# M
# [
# ]
# M[].

n = int(input())
strings = input().split()
sorted_strings = sorted(strings, key=len)
print(' '.join(sorted_strings))
