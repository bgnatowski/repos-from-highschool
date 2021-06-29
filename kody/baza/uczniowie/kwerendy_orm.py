#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
import os
from uczniowie_model import *


def kw08():
    """ lista nazwisk uczniow i nazw klas """
    query = (Uczen
             # pierwsza klasa to class, a druga to atrybut
             .select(Uczen.nazwisko, Uczen.klasa.klasa)
             .join(Klasa)

             )

    for obj in query:
        print(obj.nazwisko, obj.klasa.klasa)


def kw09():
    """ lista klas i ilosc uczniow """
    query = (Uczen
             # pierwsza klasa to class, a druga to atrybut
             .select(fn.count(Uczen.id).alias('ilu'), Uczen.klasa.klasa)
             .join(Klasa)
             .group_by(Klasa)
             .order_by(SQL('ilu').desc())
             )

    for obj in query:
        print(obj.klasa.klasa, obj.ilu)


def kw10():
    """ lista przedmiotow i ilosc ocen """
    query = (Ocena
             .select(fn.count(Ocena.ocena).alias('ilu'), Ocena.przedmiot.przedmiot)
             .join(Przedmiot)
             .group_by(Przedmiot)
             .order_by(SQL('ilu').desc())
             )

    for obj in query:
        print(obj.przedmiot.przedmiot, obj.ilu)


def kw11():
    """ Po ile ocen mają uczniowie """
    query = (Ocena
             .select(fn.COUNT(Ocena.ocena).ALIAS('ilu'), Ocena.uczen.nazwisko)
             .join(Uczen)
             .group_by(Uczen)
             .order_by(SQL('ilu').desc())
             )

    for obj in query:
        print(obj.uczen.nazwisko, obj.ilu)


def kw12():
    """ srednie ocen ucznow """
    query = (Ocena
             .select(fn.AVG(Ocena.ocena).alias('srednia'), Ocena.uczen.nazwisko)
             .join(Uczen)
             .group_by(Uczen)
             .order_by(SQL('srednia').desc())
             )

    for obj in query:
        print(obj.uczen.nazwisko, round(obj.srednia, 2))


def kw13():
    """ srednie ocen ucznia Szymczak z przedmiotow """
    query = (Ocena
             .select(Ocena.uczen.nazwisko, fn.AVG(Ocena.ocena).alias('srednia'), Ocena.przedmiot.przedmiot)
             .join(Uczen)
             .join_from(Ocena, Przedmiot)
             .where(Ocena.uczen.nazwisko == 'Szymczak')
             .group_by(Ocena.przedmiot.przedmiot)
             .order_by(SQL('srednia').asc())
             )

    for obj in query:
        print(obj.uczen.nazwisko, obj.przedmiot.przedmiot, round(obj.srednia, 2))


def kw14():
    """ ilu uczniow ma srednia powyzej 3.6 z WF? """
    query = (Ocena
             .select(Ocena.uczen.nazwisko, fn.AVG(Ocena.ocena).alias('srednia'))
             .join(Uczen)
             .join_from(Ocena, Przedmiot)
             .where(Ocena.przedmiot.przedmiot == 'WF')
             .group_by(Ocena.uczen.nazwisko)
             )
    query = [obj for obj in query if obj.srednia > 3.5]
    for obj in query:
        # if(obj.srednia>3.5):
        print(obj.uczen.nazwisko, round(obj.srednia, 2))
    print('Liczba uczniow:', len(query))

def main(args):
    baza.connect()  # połączenie z bazą
    kw14()
    # kwerendy = [
    #     "Uczen.select()",
    #     "Uczen.select().where(Uczen.imie=='Rafał')",
    #     "Uczen.select().where(Uczen.imie.startswith('G'))",
    #     "Uczen.select().where(Uczen.egz_mat.between(20,40))",
    #     "Uczen.select().where((Uczen.nazwisko=='Piasecki') & (Uczen.imie=='Rafał'))",
    #     "Uczen.select().order_by(Uczen.egz_mat.asc()",
    #     "Uczen.select().where(Uczen.plec==1).order_by(Uczen.egz_mat.asc())"
    # ]

    # for obj in eval(kwerendy[6]):
    #     print(obj.nazwisko, obj.imie, obj.egz_mat)

    baza.commit()
    baza.close()

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
