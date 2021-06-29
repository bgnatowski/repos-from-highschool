#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  klasa_uczen.py
import os
from peewee import *


baza_plik = 'uczniowie_orm.db'
baza = SqliteDatabase(baza_plik)  # instalacja wkorzystywanej bazy

######### MODELE #########


class BazaModel(Model):
    class Meta:
        database = baza


class Klasa(BazaModel):
    klasa = CharField(null=False)
    rok_naboru = IntegerField(default=0)
    rok_matury = IntegerField(default=0)


class Uczen(BazaModel):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    id_klasa = IntegerField(null=False)
    egzhum = FloatField(null=False, default=0)
    egzmat = FloatField(null=False, default=0)
    egzjez = FloatField(null=False, default=0)
    klasa = ForeignKeyField(Klasa, related_name='uczniowie')


class Przedmiot(BazaModel):
    przedmiot = CharField(null=False)
    imie_naucz = CharField(null=False)
    nazwisko_naucz = CharField(null=False)
    plec = BooleanField()


class Ocena(BazaModel):
    datad = DateField()
    id_uczen = IntegerField(null=False)
    id_przedmiot = IntegerField(null=False)
    ocena = DecimalField(null=False)
    uczen = ForeignKeyField(Uczen, related_name='oceny')
    przedmiot = ForeignKeyField(Przedmiot, related_name='oceny')


def main(args):
    if os.path.exists(baza_plik):
        os.remove(baza_plik)
    baza.connect()  # połączenie z bazą
    baza.create_tables([Klasa, Uczen, Przedmiot, Ocena])  # tworzymy tabele

    # ###DODAWANIE DANYCH###
    # kl3A = Klasa()  # instancja, czyli obiekt klasy
    # kl3A.nazwa = '3A'
    # kl3A.roknaboru = 2010
    # kl3A.rokmatury = 2013
    # kl3A.save()
    # kl2A = Klasa(nazwa='2A', roknaboru=2009, rokmatury=2012)
    # kl2A.save()
    # ucz1 = Uczen(imie='Adam',
    #              nazwisko='Słodowy',
    #              plec=False,
    #              klasa=kl3A)
    # ucz1.save()
    # ucz2 = Uczen(imie='Ewa',
    #              nazwisko='Duda',
    #              plec=True,
    #              klasa=kl2A)
    # ucz2.save()

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
