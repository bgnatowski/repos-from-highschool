#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def main(args):
    a = int(input("Podaj 1 liczbe: "))
    b = int(input("Podaj 2 liczbe: "))

    assert nwd(1989, 867) == 51
    assert nwd(10, 5) == 5

    print("Nwd({:d},{:d}) = {:d}".format(a, b, nwd(a, b)))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
