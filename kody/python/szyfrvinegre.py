#!/usr/bin/env python
# -*- coding: utf-8 -*-

def szyfruj(tekst, haslo):
    litery = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    tablica = [(litery * 2)[i:i+26] for i in range(26)]
    print('\n'.join(tablica))

def main(args):
    tekst = input("Podaj tekst: ")
    haslo = input("Podaj hasło: ")

    szyfrogram = szyfruj(tekst.upper(), haslo.upper())

    print(szyfrogram)
    print(deszyfruj(szyfrogram, haslo))
    return 0




if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
