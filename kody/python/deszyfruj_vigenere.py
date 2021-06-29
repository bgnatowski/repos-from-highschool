#!/usr/bin/env python
# -*- coding: utf-8 -*-

def deszyfruj(szyfrogram, haslo):
    tekst = []
    # litery = 'AĄBCĆDEĘFGHIJKLŁMNŃOÓPQRSTUVWXYZŹŻ'
    litery = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    litera_hasla = 0

    for i in szyfrogram:
        index = litery.find(i)
        if index != -1:
            index -= litery.find(haslo[litera_hasla])
            index %= 26
            # index %= 34 # dla alfabetu polskiego

            tekst.append(litery[index])
            litera_hasla += 1
            if litera_hasla == len(haslo):
                litera_hasla = 0
        else:
            tekst.append(i)

    return "".join(tekst)


def main(args):
    # szyfrogram = input("Podaj szyfrogram: ")
    # haslo = input("Podaj haslo: ")
    szyfrogram = "QAKCIYAMWUA."
    haslo = "INFORMATYKA"
    szyfrogram.upper()
    haslo.upper()

    print("Zaszyfrowane: ", szyfrogram)
    print("Deszyfrowane: ", deszyfruj(szyfrogram, haslo))

    return 0
# =ZNAK(JEŻELI(WIERSZ(A1)+KOLUMNA(A1)+63>90;WIERSZ(A1)+KOLUMNA(A1)+63-26;WIERSZ(A1)+KOLUMNA(A1)+63))


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
