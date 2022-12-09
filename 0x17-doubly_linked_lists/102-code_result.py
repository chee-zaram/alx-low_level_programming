#!/usr/bin/python3
def result():
    """Python function to generate and print the largest palindrome gotten from
    the product of 2 3-digit numbers into the file 102-result for ALX course.
    """
    num = 0
    for i in range(999, 99, -1):  # for every 3-digit number...
        for j in range(i, 99, -1):
            prod = i * j  # mulitply by every 3-digit number.
            if prod > num:  # only those larger than current pal are evaluated
                num_s = str(prod)
                if num_s == num_s[::-1]:  # check palindrome
                    num = prod
    fd = open("102-result", "w")
    print(num, end='', file=fd)
    fd.close()


result()
