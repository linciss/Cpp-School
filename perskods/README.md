# **Uzdevums**
>Kādā tālā valstī personas kods sastāv no septiņiem cipariem un tiem galā pierakstīta burta, kuru viennozīmīgi nosaka koda cipari.

Burta noteikšanai tiek izmantots sekojošs algoritms:

Katrs koda cipars tiek pareizināts ar noteiktu skaitli: pirmais ar 2, otrais ar 7, trešais ar 6, ceturtais ar 5, piektais ar 4, sestais ar 3 un septītais ar 2.
Visi reizinājumi tiek sasummēti un tiek atrasts summas atlikums, dalot to ar 11.
Atkarībā no iegūtā rezultāta, tiek noteikts burts, kāds jāpievieno ciparu virknes galā: 0=J, 1 =A, 2=B, 3=C, 4=D, 5=E, 6=F, 7=G, 8=H, 9=I, 10=Z.
Piemēram, ja dotā ciparu virkne ir “6830907”, tad reizinājumu summa ir 2 ´ 6 + 7 ´ 8 + 6 ´ 3 + 5 ´ 0 + 4 ´ 9 + 3 ´ 0 + 2 ´ 7 = 12 + 56 + 18 + 0 + 36 + 0 + 14 = 136. Skaitļa 136 atlikums, dalot ar 11 ir 4, kas nozīmē, ka ciparu virknei jāpievieno burts “D”. Tādējādi personas kods ir “6830907D”.

Uzrakstiet programmu, kas dotajai septiņu ciparu virknei nosaka, kāds burts jāpievieno tās galā, lai iegūtu korektu personas kodu!

## **Paraugdati**

## perskods.dat
```
6830907
```

## perskods.rez
```
D
```

# **Rezulāti**
```
>Vērtējums: 15/15

| Tests  |  Rezultāts   |
| ------ | ------------ |
|    1   |	Pareizs     |
|    2   |	Pareizs     |
|    3   |	Pareizs     |
|    4   |	Pareizs   |
|    5	 |  Pareizs     |
|    6	 |  Pareizs     |
|    7	 |  Pareizs   |
|    8 	 |  Pareizs     |
|    9 	 |  Pareizs     |
|    10	 |  Pareizs     |
|    11   |	Pareizs     |
|    12   |	Pareizs     |
|    13   |	Pareizs     |
|    14   |	Pareizs   |
|    15	 |  Pareizs     |
```




