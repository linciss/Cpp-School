# **Aprēķiniet inversiju skaitu masīvā**

## **Masīva inversija norāda, cik tālu masīvs atrodas no kārtošanas. Inversijas ir masīva elementu pāri, kas nav kārtībā.**

------
## **Piemēram:**

* ### [1, 2, 3, 4] => 0 inversiju
* ### [1, 3, 2, 4] => 1 inversija: 2 un 3
* ### [4, 1, 2, 3] => 3 inversijas: 4 un 1, 4 un 2, 4 un 3
* ### [4, 3, 2, 1] => 6 inversijas: 4 un 3, 4 un 2, 4 un 1, 3 un 2, 3 un 1, 2 un 1
  
---
## **Rezultāti**


### RandomTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NoInversions
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### OneInversion
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### EmptyInput
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### FullReversal
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### DuplicateElements
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <vector>

Describe(Tests)
{
    It(NoInversions)
    {
        int expected = 0;        
        int actual = kata.countInversions(std::vector<int> { 1, 2, 3 });
        Assert::That(actual, Is().EqualTo(expected));
    }
    
    It(OneInversion)
    {
        int expected = 1;
        int actual = kata.countInversions(std::vector<int> { 2, 1, 3 });
        Assert::That(actual, Is().EqualTo(expected));
    }
  
private:
  Kata kata;
};