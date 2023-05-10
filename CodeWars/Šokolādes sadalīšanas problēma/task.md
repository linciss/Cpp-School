# **Saskaiti smaidīgās sejas!**

## **Tavs uzdevums ir sadalīt šokolādes tāfelīti ar doto izmēru n x m mazos kvadrātiņos. Katrs kvadrāts ir 1x1 izmērā un nesalaužams. Ieviesiet funkciju, kas atgriezīs minimālo nepieciešamo pārtraukumu skaitu.**
------
## **Piemēram:**

* ### Piemēram, ja jums tiek dota šokolādes tāfelīte ar izmēru 2 x 1, jūs varat to sadalīt atsevišķos kvadrātos tikai vienā pārtraukumā, bet izmēram 3 x 1 jums ir jāveic divi pārtraukumi.

  
---
## **Rezultāti**


###    Fixed_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(Breaking_chocolate_problem)
{
    It(Fixed_tests)
    {
        Assert::That(break_chocolate(5, 5), Equals(24));
        Assert::That(break_chocolate(7, 4), Equals(27));
        Assert::That(break_chocolate(1, 1), Equals(0));
        Assert::That(break_chocolate(0, 0), Equals(0));
        Assert::That(break_chocolate(6, 1), Equals(5));     
    }
};