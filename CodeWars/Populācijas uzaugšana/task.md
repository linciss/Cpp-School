
# **Populācijas augšana**

## **Mazpilsētā iedzīvotāju skaits gada sākumā ir p0 = 1000. Iedzīvotāju skaits regulāri pieaug par 2 procentiem gadā, turklāt pilsētā ierodas 50 jauni iedzīvotāji gadā. Cik gadi pilsētā ir vajadzīgi, lai tās iedzīvotāju skaits būtu lielāks vai vienāds ar p = 1200 iedzīvotājiem?**
------
## **Piemēram:**

* ### Pirmā gada beigās būs:
* ### 1000 + 1000 * 0,02 + 50 => 1070 iedzīvotāji

* ### 2. gada beigās būs:
* ### 1070 + 1070 * 0,02 + 50 => 1141 iedzīvotājs (** iedzīvotāju skaits ir vesels skaitlis **)

* ### 3. gada beigās būs:
* ### 1141 + 1141 * 0,02 + 50 => 1213

* ### Tam būs nepieciešami veseli 3 gadi.

---
## **Rezultāti**


###   Fixed_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_nbYear
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
void testequal(int ans, int sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(int p0, double percent, int aug, int p, int expected)
{
    testequal(Arge::nbYear(p0, percent, aug, p), expected);
}
Describe(nbYear_Tests)
{
    It(Fixed__Tests)
    {
        dotest(1500, 5, 100, 5000,15);
        dotest(1500000, 2.5, 10000, 2000000, 10);
        dotest(1500000, 0.25, 1000, 2000000, 94);
        dotest(1500000, 0.25, -1000, 2000000, 151);
    }
};