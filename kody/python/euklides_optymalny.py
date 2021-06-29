#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def nwd_rek(a, b):
    if b == 0:
        return a
    return nwd_rek(b, a % b)


def main(args):
    a = int(input("Podaj 1 liczbe: "))
    b = int(input("Podaj 2 liczbe: "))

    assert nwd(1989, 867) == 51

    # print("Najwiekszy wspolny dzielnik: ", nwd(a,b))
    # print("Nwd({:d},{:d}) = {:d}".format(a, b, nwd(a, b)))
    print("Nwd({:d},{:d}) = {:d}".format(a, b, nwd_rek(a, b)))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
