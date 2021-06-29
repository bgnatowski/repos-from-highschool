#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sqlite3


def kwerenda1(cur):
    cur.execute("""
        SELECT * FROM uczniowie
    """)

    # SELECT * FROM nazwiska INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia
    # WHERE miejsce_urodz='Gdańsku' urodzeni w gdanski
    # WHERE miejsce_urodz <> 'Gdańsku' urodzeni gdzie indziej niz w gdansku
    # SELECT COUNT(*) FROM nazwiska WHERE imie1 LIKE 'A__a'
    # SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    # SELECT * FROM nazwiska WHERE imie1 LIKE 'A__a'
    for row in cur.fetchall():
        print(tuple(row))


def main(args):
    # KONFIGURACJA ############
    baza = 'uczniowie'
    tabele = ['uczniowie', 'klasy', 'przedmioty', 'oceny']
    roz = '.csv'
    naglowki = False
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
