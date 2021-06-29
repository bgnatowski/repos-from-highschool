#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input('Podaj liczbe:'))
    b = int(input('Podaj liczbe:'))
    c = int(input('Podaj liczbe:'))

    if m < a:
        m=a
    if m < b:
        m=b
    if m < c:
       m=c
    print(m)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
