#!/usr/bin/env python
# -*- coding: utf-8 -*-


def horner_it(st, tab_wsp, x):
    wynik = tab_wsp[0]
    for i in range(1, st + 1):
        wynik = wynik * x + tab_wsp[i]
    return wynik


def horner_rek(st, tab_wsp, x):
    if st == 0:
        return tab_wsp[0] # zamiast tab_wsp[0] * x <<< tu byl blad
    return horner_rek(st - 1, tab_wsp, x) * x + tab_wsp[st]


def main(args):
    stopien = 3
    tab_wsp = []

    x = int(input("Podaj argument wielomianu:"))
    for i in range(0, 4):
        wsp = int(input("Podaj wspolczynnik wielomianu:"))
        tab_wsp.append(wsp)

    assert horner_it(stopien, [1, 2, 3, 4], 2) == 26
    assert horner_rek(stopien, [1, 2, 3, 4], 2) == 26

    print("Wartosc wielomianu_it: ", horner_it(stopien, tab_wsp, x))
    print("Wartosc wielomianu_rek: ", horner_rek(stopien, tab_wsp, x))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
