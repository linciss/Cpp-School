# **Alkatība ir laba**

## **Alkatība ir kauliņu spēle, ko spēlē ar pieciem sešpusējiem kauliņiem. Jūsu uzdevums, ja izvēlaties to pieņemt, ir gūt metienu saskaņā ar šiem noteikumiem. Jums vienmēr tiks dots masīvs ar piecām sešpusējām kauliņu vērtībām.**
------
## **Piemēram:**
```
 Trīs 1 => 1000 points
 Trīs 6 =>  600 points
 Trīs 5 =>  500 points
 Trīs 4 =>  400 points
 Trīs 3 =>  300 points
 Trīs 2 =>  200 points
 Viens 1 =>  100 points
 Viens 5 =>   50 point
```
## **Vienu kauliņu var ieskaitīt tikai vienu reizi katrā ripā. Piemēram, dotais "5" var tikt ieskaitīts tikai kā daļa no tripleta (ieguldot 500 punktus) vai kā viens 50 punkti, bet ne abi vienā un tajā pašā sarakstā.**
---
## **Vērtēšanas piemērs**
```
 Metiens     Punkti
 ---------   ------------------
 5 1 3 4 1   250:  50 (par 5) + 2 * 100 (par 1)
 1 1 1 3 1   1100: 1000 (par trijiem 1s) + 100 (par citu 1)
 2 4 4 5 4   450:  400 (par trijiem 4) + 50 (par 5)
```
---
## **Rezultāti**


### Testa_paraugs
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Fiksēts_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Nejaušs_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(GreedisGood_test)
{
    It(Sample_Test)
    {
        Assert::That(score({2, 3, 4, 6, 2}), Equals(0));
        Assert::That(score({2, 4, 4, 5, 4}), Equals(450));
    }
};
