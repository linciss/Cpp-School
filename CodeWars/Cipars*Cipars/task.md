# **Cipars*Cipars**

## **Laipni lūdzam. Šajā katā jums tiek lūgts izvilkt kvadrātā katru skaitļa ciparu un tos savienot.**
------
## **Piemēram:**

* ### Piemēram, ja mēs izpildām funkciju 9119, iznāks 811181, jo 92 ir 81 un 12 ir 1. (81-1-1-81)

  
---
## **Rezultāti**


###    Sample_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Square_Every_Digit)
{
    It(Sample_tests)
    {       
        Assert::That(square_digits(3212), Equals(9414));   
        Assert::That(square_digits(2112), Equals(4114)); 
        Assert::That(square_digits(0), Equals(0));
        Assert::That(square_digits(13579), Equals(19254981));   
        Assert::That(square_digits(24680), Equals(41636640)); 
    }  
};
