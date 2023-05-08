# **Komplimentārā DNS**

## **DNS virknēs simboli "A" un "T" ir viens otru papildinājumi, piemēram, "C" un "G". Jūsu funkcija saņem vienu DNS pusi (virkni, izņemot Haskell); jums ir jāatgriež otra papildinošā puse.**
------
## **Piemēram:**

* ### "ATTGC" --> "TAACG"

* ### "GTAT" --> "CATA"


---
## **Rezultāti**


###   PiemēraTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### PaplašinātieTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
    It(BasicTests)
    {
        Assert::That(DNAStrand("AAAA"), Equals("TTTT"));
        Assert::That(DNAStrand("ATTGC"), Equals("TAACG"));
        Assert::That(DNAStrand("GTAT"), Equals("CATA"));
    }
};