# **Burbuļkārtošana 1 reiz**

## **Ņemot vērā veselu skaitļu masīvu, funkcijai bubblesortOnce/bubblesort_once/BubblesortOnce (vai līdzvērtīgai, atkarībā no jūsu valodas nosaukšanas principiem) ir jāatgriež jauns masīvs, kas ir līdzvērtīgs tieši 1 pilnīgas darbības veikšanai sākotnējā masīvā. Jūsu funkcijai ir jābūt tīrai, t.i., tai nevajadzētu mainīt ievades masīvu.**
------
## **Piemēram:**

* ###  753124689 ==> 531246789

  
---
## **Rezultāti**


###    _0_ExampleTest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### _1_ExtendedTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
### _2_AdvancedTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
### _3_RandomTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Tests)
{
    It(ExampleTest)
    {
        // Example test case from description
        std::vector<int> expected = { 7, 5, 3, 1, 2, 4, 6, 8, 9 };
        std::vector<int> actual = bubbleSortOnce({ 9, 7, 5, 3, 1, 2, 4, 6, 8 });
        Assert::That(actual, Is().EqualToContainer(expected));
    }
};
