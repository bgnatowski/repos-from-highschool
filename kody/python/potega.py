#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... *a (n-czynnikow) dla liczb N+ / {0,1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potege l. naturalnej"""
    wynik = 1
    # i = 1
    # while i <= wykladnik:
    for i in range(wykladnik):
        wynik = wynik * podst
        # i = i + 1
    return wynik


# a0 = 1 - warunek brzegowy
# if a>0 an = a(n-1) * a

def potega_rek(a, n):
    if n == 0:
        return 1
    return potega_rek(a, n - 1) * a


def main(args):
    podstawa = int(input("Podaj podstawe:"))
    wykladnik = int(input("Podaj wykladnik potegi:"))

    assert type(podstawa) == int
    assert type(wykladnik) == int

    assert potega_it(20, 0) == 1
    assert potega_it(20, 1) == 20
    assert potega_it(2, 3) == 8

    assert potega_rek(20, 0) == 1
    assert potega_rek(20, 1) == 20
    assert potega_rek(2, 3) == 8

    print("Wynik_it: ", potega_it(podstawa, wykladnik), '\n')
    print("Wynik_rek: ", potega_rek(podstawa, wykladnik))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
