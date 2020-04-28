#!/usr/bin/python3
import random

number = random.randint(-10000, 10000)
was_neg = False

if number < 0:
    number *= -1
    was_neg = True

last_digit = number % 10

if was_neg:
    last_digit *= -1
    number *= -1

print("Last digit of {:d} is {:d} ".format(number, last_digit), end='')
abs(last_digit)

if last_digit > 5:
    print("and is greater that 5")
elif last_digit == 0:
    print("and is 0")
elif last_digit < 6 and last_digit != 0:
    print("and is less than 6 and not 0")
