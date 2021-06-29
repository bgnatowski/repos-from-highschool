#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor


def wyszukaj_liniowo(li, el):
    for i in range(0, len(li)):
        if li[i] == el:
            return i
    return -1


def wyszukaj_bin_it(li, el):
    lewy, prawy = 0, len(li) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if el <= li[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1

    if li[lewy] == el:
        return lewy
    else:
        return -1


def wyszukaj_bin_rek(l, p, li, el):
    if l > p:
        return -1

    srodek = floor((l + p) / 2)
    if el == li[srodek]:
        return srodek
    elif el < li[srodek]:
        return wyszukaj_bin_rek(l, srodek - 1, li, el)
    else:
        return wyszukaj_bin_rek(srodek + 1, p, li, el)


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista.sort()  # sortuje tabele od najmniejszej
    print(lista)

    el = int(input("Jaki element chcesz wyszukac: "))
    print("LINIOWO: ", wyszukaj_liniowo(lista, el))

    assert wyszukaj_liniowo(lista, 8) == -1
    assert wyszukaj_liniowo(lista, 8) == -1
    assert wyszukaj_liniowo(lista, 3) == 4
    assert wyszukaj_liniowo(lista, -4) == 0
    assert wyszukaj_liniowo(lista, 4) == 6
    assert wyszukaj_bin_it(lista, 8) == -1
    assert wyszukaj_bin_it(lista, 3) == 4
    assert wyszukaj_bin_it(lista, -4) == 0
    assert wyszukaj_bin_it(lista, 4) == 6
    assert wyszukaj_bin_rek(0, len(lista) - 1, lista, 8) == -1
    assert wyszukaj_bin_rek(0, len(lista) - 1, lista, 3) == 4
    assert wyszukaj_bin_rek(0, len(lista) - 1, lista, -4) == 0
    assert wyszukaj_bin_rek(0, len(lista) - 1, lista, 4) == 6

    if wyszukaj_bin_it(lista, el) == -1:
        print("IT: Brak elementu w zbiorze.")
    else:
        print("IT: Szukana pozycja dla elementu ", "\'", el,
              "\'", " to: ", wyszukaj_bin_it(lista, el))

    if wyszukaj_bin_rek(0, len(lista) - 1, lista, el) == -1:
        print("REK: Brak elementu w zbiorze.")
    else:
        print("REK: Szukana pozycja dla elementu ", "\'", el,
              "\'", " to: ", wyszukaj_bin_rek(0, len(lista) - 1, lista, el))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
