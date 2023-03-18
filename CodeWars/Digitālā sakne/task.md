# **Digitālā sakne**

## **Digitālā sakne ir visu skaitļa ciparu rekursīva summa. Ņemot vērā n, ņem n ciparu summu. Ja šai vērtībai ir vairāk nekā viens cipars, turpiniet samazināšanu šādā veidā, līdz tiek izveidots viencipara skaitlis. Ievadītā vērtība būs nenegatīvs vesels skaitlis.**
------
## **Piemēram:**

* ###  16  -->  1 + 6 = 7
* ###  942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
* ### 132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
* ### 493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

  
---
## **Rezultāti**


###    FiksētieTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušieTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Fixed_tests)
{
    It(Digital_root)
    {
        Assert::That(digital_root(16) , Equals(7));
        Assert::That(digital_root(195) , Equals(6));
        Assert::That(digital_root(992) , Equals(2));
        Assert::That(digital_root(167346) , Equals(9));
        Assert::That(digital_root(0) , Equals(0));
    }
};
