### Übungsblatt 21

Allgemeiner Hinweis: Implementieren Sie für alle Ihre Lösungen einen Dialog-Test, auch wenn dies
bei einzelnen Aufgaben nicht explizit in der Aufgabenstellung genannt ist. Der Test sollte so gestaltet
sein, dass die Funktionsweise Ihres Programms bei der Abnahme gut nachvollzogen werden kann.

## 1. Aufgabe
(a) Implementieren sie zwei Funktions-Bibliotheken zur Berechnung einfacher physikalischer Formeln.
Die Bibliotheken sollen auf einfache Art und Weise wiederverwendbar sein. Teilen Sie dazu
Deklaration und Implementierung in unterschiedliche Dateien auf. Definieren Sie Ihre eigenen
Typen für die verwendeten physikalischen Größen. Zur Wiederverwendbarkeit sollen diese in
einer eigenen Header-Datei definiert sein.
Die erste Funktions-Bibliothek soll Funktionen zur Berechnung folgender mechanischer Größen
besitzen:
- Geschwindigkeit: v := ∆s / ∆t
- Beschleunigung: a := ∆v / ∆t
- Impuls: p := m · v

Die zweite Bibliothek soll Funktionen zur Berechnung geradliniger Bewegungen beinhalten:
- Weg einer gleichförmigen geradlinigen Bewegung: s = v · (t − t0)
- Weg einer gleichmäßig beschleunigten geradlinigen Bewegung: s = (v^2−v0^2) / 2a
- Geschwindigkeit einer gleichmäßig beschleunigten geradlinigen Bewegung:
v = a · (t − t0) + v0

Mit: v := Geschwindigkeit, a := Beschleunigung, p := Impuls, s := Weg, t := Zeit, m = Masse

(b) Implementieren Sie ein interaktives Testprogram, welches Ihre Bibliotheken einbindet und
testet.

## 2. Aufgabe
Bubblesort ist ein einfach zu implementierender Sortieralgorithmus. Der Pseudocode des Algorithmus sieht wie folgt aus:
```
procedure bubbleSort( A : list of sortable items ) defined as:
for each i in 1 to length(A) do:
for each j in length(A) downto i + 1 do:
if A[ j -1 ] > A[ j ] then
swap( A[ j - 1], A[ j ] )
end if
end for
end for
end procedure
```

Implementieren Sie Folgendes:

(a) Eine Funktion compare, welche zwei Integer-Werte vergleicht. Das Ergebnis der Funktion ist
<0 falls a < b, 0 falls a == b und >0 sonst.

(b) Eine Funktion swap, welche zwei übergebene Werte vertauscht.

(c) Eine Funktion sort, welche einen Pointer auf ein Integer-Array entgegennimmt und dieses
mit dem Bubblesort-Algorithmus sortiert. Nutzen Sie dabei die Funktionen compare und swap.
Hinweis: Sie müssen der Funktion auch die Größe des Arrays als Argument übergeben

(d) Ein Testprogram
