# **Bitu sakitīšana**

## **Uzrakstiet funkciju, kas kā ievadi izmanto veselu skaitli un atgriež bitu skaitu, kas ir vienāds ar vienu šī skaitļa binārajā attēlojumā. Varat garantēt, ka ievade nav negatīva.**
------
## **Piemēram:**

* ### 1234 ir 10011010010, tāpēc funkcijai šajā gadījumā ir jāatgriež 5

  
---
## **Rezultāti**


###    PamataTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušiTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(CountBits){
  It(BasicTests){
    Assert::That(countBits(0), Equals(0));
    Assert::That(countBits(4), Equals(1));
    Assert::That(countBits(7), Equals(3));
    Assert::That(countBits(9), Equals(2));
    Assert::That(countBits(10), Equals(2));
    Assert::That(countBits(26), Equals(3));
    Assert::That(countBits(77231418), Equals(14));
    Assert::That(countBits(12525589), Equals(11));
    Assert::That(countBits(3811), Equals(8));
    Assert::That(countBits(392902058), Equals(17));
  }
};