#!/usr/bin/env python
# -*- coding: utf-8 -*-


def deszyfruj(szyfrogram, klucz):
    tekst = ""
    for i in szyfrogram:
        ascii = ord(i) - klucz
        # print(ascii)
        if ord(i) == 32:  # deszyfracja spacji
            ascii = 32
        if ord(i) == 46:  # deszyfracja kropek
            ascii = 46
        if ascii < 65 and ascii != 32 and ascii != 46:
            ascii += 26
        if ascii > 90 and ascii < 97 and ascii != 32 and ascii != 46:
            ascii += 26
        # print(i, ascii)
        if i != "." and ascii == 46:  # to niweluje buga sprawiajacego,
                                      # że 8 => "RS" gdyz linia 37 go powoduje
            ascii += 26
        # print(i, ascii)

        if i.isdigit():  # deszyfracja cyfr cyfr
            # print(ascii)
            ascii -= 26
            if ascii < 48:
                ascii += 10
            # print(ascii)
        tekst += chr(ascii)

    return tekst

# oblsłuzyć male i duże litery
# obsluzyc spacje
# sprawdzajka: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz Bartosz Gnatowski urodzony 02.11.2000 roku w Sandomierzu 0123456789


def main(args):
    # szyfrogram = input("Podaj szyfrogram: ")
    # klucz = int(input("Podaj klucz: "))
    szyfrogram = "QKIAWAACYMU"
    klucz = 2
    print("Zaszyfrowane: ", szyfrogram)
    print("Deszyfrowane: ", deszyfruj(szyfrogram, klucz))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
