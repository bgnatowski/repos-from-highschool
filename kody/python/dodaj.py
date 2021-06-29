#!/usr/bin/env python3
# -*- coding: utf-8 -*-

def sumuj(x, y):
	return x+y
def odejmij(x,y):
	return x-y
def iloczyn(x, y):
	return x*y
def iloraz(x,y):
	if y==0:
		print('Nie dzielimy przez 0!')
	return x/y
a=int(input('Podaj pierwsza liczbe:'))
b=int(input('Podaj druga liczbe:'))

print('Suma:', sumuj(a,b))
print('Roznica:', odejmij(a,b))
print('Iloczyn:', iloczyn(a,b))
print('Iloraz:', iloraz(a,b))
