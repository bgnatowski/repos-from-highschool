#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sqlite3


def kwerenda1(cur):
    cur.execute("""
    SELECT klasa, AVG(ocena) AS srednia FROM oceny
    INNER JOIN uczniowie ON uczniowie.id=oceny.id_uczen
    INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
    GROUP BY klasy.id
    ORDER BY srednia DESC


    """)

    # WITH srednie AS(
    # SELECT nazwisko, imie, AVG(ocena) AS srednia FROM uczniowie
    # INNER JOIN oceny ON uczniowie.id = oceny.id_uczen
    # GROUP BY uczniowie.id
    # ) SELECT COUNT(srednia) FROM srednie
    # WHERE srednia > 3.8
    # SELECT klasa, COUNT(nazwisko) AS ilosc FROM uczniowie
    # INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
    # GROUP BY klasa
    # ORDER BY ilosc ASC
    # SELECT plec, COUNT(id) FROM uczniowie
    # WHERE egz_mat > (SELECT AVG(egz_mat) FROM uczniowie)
    # GROUP BY plec
    # SELECT plec, AVG(egz_mat), AVG(egz_hum), AVG(egz_jez) FROM uczniowie
    #             GROUP BY plec
    # GROUP BY plec
    # SELECT AVG(egz_mat) FROM uczniowie
    # ORDER BY egz_mat DESC
    # LIMIT 6
    # WHERE egz_mat>40 AND egz_hum>40
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
