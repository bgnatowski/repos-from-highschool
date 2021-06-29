-- bazagus.sql
--CREATE - klauzula

DROP TABLE IF EXISTS miasta;
DROP TABLE IF EXISTS dane_demograficzne;
DROP TABLE IF EXISTS powierzchnia;

CREATE TABLE miasta (
    id_miasta INTEGER PRIMARY KEY AUTOINCREMENT,
    nazwa_miasta TEXT(30),
    wojewodztwo TEXT(30)
);

-- sqlite3 nazwa.db < nazwa.sql
-- sqlite3 nazwa.db
-- sqlite>.table - wyswietla tabele
-- sqlite>.schema - wyswietla klauzule SQL
-- sqlute>.quit - wychodzenie z interpretera

CREATE TABLE dane_demograficzne(
    id INTEGER,
    liczba_mieszkancow INTEGER,
    liczba_kobiet INTEGER,
    grupa_wiekowa TEXT(15),
    data_akt DATE,
    id_miasta INTEGER,
    FOREIGN KEY (id_miasta) REFERENCES miast(id_miasta)

);

CREATE TABLE powierzchnia(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    powierzchnia_miasta DECIMAL,
    powierzchnie_zielone DECIMAL,
    data_akt DATE,
    id_miasta INTEGER,
    FOREIGN KEY (id_miasta) REFERENCES miast(id_miasta)

);
