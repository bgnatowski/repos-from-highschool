#!/usr/bin/env python
# -*- coding: utf-8 -*-

from random import randint

def losuj(ileliczb,maksliczb):
    liczby = []  # lista
    #for i in range(ileliczb):
    ile = 0  # ilosc wylosowanych liczb
    while ile<ileliczb:
        pass
        liczba = randint(0,maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1
    return liczby


def typuj(ileliczb):
    #for i in range(ileliczb):
    typy = set()  # pusty zbiór
    ile = 0 #ilosc podanych typow
    while ile<ileliczb:
        typ = int(input("Podaj typ: "))
        if typ not in typy:
            typy.add(typ)
            ile += 1
    return typy


def main(args):
    try:
        ileliczb = int(input("Ile liczb chcesz zgadnac?"))
        maksliczb = int(input("Podaj gorny zkres: "))

        while ileliczb > maksliczb:
            ileliczb = int(input("Ile liczb chcesz zgadnac z %s " % maksliczb))
    except ValueError:
        print('Bledne dane! Uruchom ponownie.')
        exit()
    liczby = losuj(ileliczb,maksliczb)
    typy = typuj(ileliczb)
    print(liczby)
    print(typy)
    trafione = set(liczby) & typy
    print("Trafione: ", len(trafione))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
