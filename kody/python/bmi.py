#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    ile = int(input("ile razy chcesz wykonac test: "))
    i=1
    # print(bmi)

    while i<ile:
        wzrost = float(input("Podaj wzrost(m): "))
        masa = int(input("Podaj mase: "))
        bmi = masa / (wzrost * wzrost)
        if bmi >= 30:
             print("no niestety, jestes gruby. otyłość")
        elif bmi >= 25:
                print("moglbys troche schudnac, bo tylko nadwaga")
        elif bmi >= 18.5:
            print("dobry ziomek w normie")
        else:
            print("patyk, wez cos zjedz, niedowaga")
        i+=1
        # wzrost = float(input("Podaj wzrost(m): "))
        # masa = int(input("Podaj mase: "))
        # bmi = masa / (wzrost * wzrost)
        # i+=1

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
