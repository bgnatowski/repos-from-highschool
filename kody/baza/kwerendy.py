#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sqlite3


def kwerenda1(cur):
    cur.execute("""
        SELECT * FROM nazwiska
    """)
    for row in cur.fetchall():
        print(tuple(row))


def main(args):
    # KONFIGURACJA ############
    baza = 'uczniowie'
    tabele = ['nazwiska', 'dane_osobowe', 'oceny']
    roz = '.txt'
    naglowki = True  # czy pliki zawieraja naglowki
    ###########################
    con = sqlite3.connect(baza + '.db')  # połączenie
    cur = con.cursor()  # obiekt kursora

    kwerenda1(cur)

    con.commit()
    con.close()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
