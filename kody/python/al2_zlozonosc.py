#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = 0
    while a <= 0 or a >= 100:
        a = int(input("Podaj liczbe: "))

    # for i in range(2, a+1, 2):
    #     if a == i:
    #         print("parzyste")
    #         return 0
    # print("nieparzyste")
    # return 0
    i = 2
    while i <= a:
        if a == i:
            print("parzyste")
            return 0
        i += 2
    print("nieparzyste")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
