#!/usr/bin/env python
# -*- coding: utf-8 -*-


def suma(a, b):
    return a + b


def roznica(a, b):
    return a - b


def iloczyn(a, b):
    return a * b


def iloraz(a, b):
    return a / b


def main(args):
    a = int(input("Podaj 1. liczbe: "))
    print(a)
    b = int(input("Podaj 2. liczbe: "))

    while b == 0:
        print("nie dzielimy przez 0")
        b = int(input("Podaj 2. liczbe: "))
        print(b)

    print("Suma: ", suma(a,b))
    print("Roznica: ", roznica(a,b))
    print("Iloczyn: ", iloczyn(a,b))
    print("Iloraz: ", iloraz(a,b))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
