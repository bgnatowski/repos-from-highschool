#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def main(args):
    li = int(input("Podaj licznik: "))
    mia = int(input("Podaj mianownik: "))

    assert nwd(1989, 867) == 51

    print("Ulamek po skroceniu: ",(li/nwd(li,mia)), '/', (mia/nwd(li,mia)))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
