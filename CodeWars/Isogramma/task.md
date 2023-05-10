# **Isogramma**

## **Izogramma ir vārds, kurā nav secīgu vai ne secīgu burtu, kas atkārtojas. Ieviesiet funkciju, kas nosaka, vai virkne, kurā ir tikai burti, ir izogramma. Pieņemsim, ka tukšā virkne ir izogramma. Ignorēt reģistru.**
------
## **Piemēram:**

* ###  isIsogram "Dermatoglyphics" = true
* ###  isIsogram "moose" = false
* ###  isIsogram "aba" = false

---
## **Rezultāti**


###    isogram_or_not
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Tests)
{
    It(isogram_or_not)
    {
        Assert::That(is_isogram("Dermatoglyphics"), Equals(true));
        Assert::That(is_isogram("moose"), Equals(false));
        Assert::That(is_isogram("isIsogram"), Equals(false));
    }
};