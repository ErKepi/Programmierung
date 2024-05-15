# Geschachtelte Schleifen

## Ertse for-Schleife
- zahlen [20 - i] --> zahlen[0]
- i % 3 --> 20 % 3 = 18 **Rest: 2**
- zahlen[0] bekommt 2 als Wert zugewiesen
  - Dann an der Stelle 1 den Wert 1
  - an der Stelle 2 den Wert 0
  - an der Stelle 3 den Wert 2
  - an der Stelle 4 den Wert 1
- Schleife stoppt, da i = 16 > 15 gilt, 'zahlen' hat die Werte {2, 1, 0, 2, 1}

## Zweite for-Schleife
- Insgesamt läuft es 15 mal
  - 5 mal die Äußere 
  - 3 mal die Innere
- zahlen[0], [2] und [4] werden wiederholden überschrieben
- neue Werte: 
  - [0] = {36}
  - [2] = {28}
  - [4] = {64}