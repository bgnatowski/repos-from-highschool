#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = 0
    while a <= 0 or a >= 100:
        a = int(input("Podaj liczbe: "))
    i = 2
    while a != i:
        i += 2
        if i > a:
            print(a, " jest nieparzyste")
            return 0
    print(a, " jest parzyste")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
