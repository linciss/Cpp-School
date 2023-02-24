# **Atrodiet mazāko veselo skaitli masīvā**

## **Ņemot vērā veselu skaitļu masīvu, jūsu risinājumam jāatrod mazākais veselais skaitlis.**
------
## **Piemēram:**

* ### Ņemot vērā [34, 15, 88, 2], jūsu risinājums atgriezīs 2

* ### Ņemot vērā [34, -345, -1, 100], jūsu risinājums atgriezīs -345
  
---
## **Rezultāti**


###    Pārbauda_pozitīvās_vērtības
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Pārbauda_negatīvas_vērtības
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Pārbauda_maisījuma_vērtības
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Pārbauda_nejaušu_skaitli
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(Smallest_Number)
{
    It(Check_Positive_Values)
    {
        Assert::That(findSmallest({3,5,2}), Equals(2));
          Assert::That(findSmallest({7,4,6,8}), Equals(4));  
            Assert::That(findSmallest({17,21,15,36,96}), Equals(15));
              Assert::That(findSmallest({3,9,13,10,5,3,9,5}), Equals(3));
    }
    It(Check_Negative_Values)
    {
      Assert::That(findSmallest({-12,-52,-27}), Equals(-52));  
        Assert::That(findSmallest({-3,-27,-4,-2,-27,-2}), Equals(-27));
            Assert::That(findSmallest({-16,-37,-8,-46,-29}), Equals(-46));
              Assert::That(findSmallest({-14,-102,-96,-36,-46,-15,-44}), Equals(-102));
    }
    It(Check_Mixture_Values)
    {
      Assert::That(findSmallest({12,0,-27}), Equals(-27));  
        Assert::That(findSmallest({-13,-50,57,13,67,-13,57,108,67}), Equals(-50));
          Assert::That(findSmallest({-23,12,0,-47,-3,24}), Equals(-47));
    }
};
