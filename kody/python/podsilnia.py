#!/usr/bin/env python
# -*- coding: utf-8 -*-


def podsilnia(n):
    if n == 0:
        return 1
    elif n == 1:
        return 0
    return (n - 1) * (podsilnia(n - 1) + podsilnia(n - 2))


def main(args):
    liczba = int(input("Podaj liczbe: "))

    print("Podsilnia jest rowna = ", podsilnia(liczba))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
