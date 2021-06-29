#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a! = 1 dla {0,1}
# a! = 1*2*...*n N+{0,1}

# n! = (n-1)! * n
# 4! = 3! * 4


def silnia_rek(n):
    if n < 2:
        return 1
    return silnia_rek(n - 1) * n


def silnia_it(n):
    """Funkcja oblicza iteracyjnie potege l. naturalnej"""
    wynik = 1
    for i in range(2, n + 1):
        wynik = wynik * i
    return wynik


def main(args):
    a = int(input("Podaj liczba:"))
    assert type(a) == int

    assert silnia_it(0) == 1
    assert silnia_it(1) == 1
    assert silnia_it(2) == 2
    assert silnia_it(6) == 720

    assert silnia_rek(0) == 1
    assert silnia_rek(1) == 1
    assert silnia_rek(2) == 2
    assert silnia_rek(6) == 720

    print("Wynik iteracyjny: ", silnia_it(a), ' \n ')
    print("Wynik rekurencyjny: ", silnia_rek(a))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
