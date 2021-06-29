#!/usr/bin/env python
# -*- coding: utf-8 -*-
from random import randint


def minimum(lista):
    min = lista[0]
    for i in lista:
        if i < min:
            min = i
    return min


def maksimum(lista):
    max = lista[0]
    for i in lista:
        if i > max:
            max = i
    return max


def minmax(lista):
    lmax = []
    lmin = []
    index = 0

    for i in range(int(len(lista) / 2)):
        if lista[index] > lista[index + 1]:
            lmax.append(lista[index])
            lmin.append(lista[index + 1])
        else:
            lmin.append(lista[index])
            lmax.append(lista[index + 1])
        index += 2

    print("Maksymalna: ", maksimum(lmax))
    print("Minimalna: ", minimum(lmin))

    return 0


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista


def main(args):
    ile = int(input("Ile liczb: "))
    zakres = int(input("Podaj zkres: "))

    assert minimum([6, 8, 0, 9, 1, ]) == 0
    assert maksimum([6, 8, 0, 9, 1, ]) == 9

    lista = losuj(ile, zakres)
    print(lista)

    minmax(lista)

    # print("Najmniejsza: ", minimum(lista))
    # print("Najwieksza: ", maksimum(lista))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
