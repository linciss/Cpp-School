
# **Aizstāt ar alfabēta pozīciju**

## **Šajā katā, ņemot vērā virkni, katrs burts ir jāaizstāj ar tā pozīciju alfabētā. Ja tekstā kaut kas nav burts, ignorējiet to un neatgrieziet to.**
------
## **Piemēram:**

* ### alphabet_position("The sunset sets at twelve o' clock.") ->  "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"

---
## **Rezultāti**


###   Fixed_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Sample_Tests) {
  It(Tests) {
    Assert::That(alphabet_position("The sunset sets at twelve o' clock."), Equals("20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"));
    Assert::That(alphabet_position("The narwhal bacons at midnight."), Equals("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"));
    Assert::That(alphabet_position("0123456789"), Equals(""));
    Assert::That(alphabet_position(",./<>?-_=+ "), Equals(""));
    Assert::That(alphabet_position(""), Equals(""));
  }
};