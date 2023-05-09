# **Augstākais un zemākais**

## **Šajā mazajā uzdevumā jums tiek dota ar atstarpi atdalītu skaitļu virkne, un jums ir jāatgriež lielākais un mazākais skaitlis.**
------
## **Piemēram:**

* ### highAndLow("1 2 3 4 5");  // return "5 1"
* ### highAndLow("1 2 -3 4 5"); // return "5 -3"
* ### highAndLow("1 9 3 4 -5"); // return "9 -5"
  
---
## **Rezultāti**


###    SomeTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    SortTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    PlusMinusTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    PlusPlusTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
###    MinusMinusTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    PlusMinusZeroTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


###    PlusPlusZeroTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    MinusMinusZeroTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
###    SingleTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    RandomTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>



### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(ExampleTests){
  It(Test1){
    Assert::That(highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4"), Equals("42 -9"));
  }
  It(Test2){
    Assert::That(highAndLow("1 2 3"), Equals("3 1"));
  }
};