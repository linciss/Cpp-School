
# **Pozitīvo summa**

## **You get an array of numbers, return the sum of all of the positives ones.**
------
## **Piemēram:**

* ### [1,-4,7,12] => 1 + 7 + 12 = 20

---
## **Rezultāti**


###   Fixed_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### RandomTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(Tests)
{
    It(works_for_some_examples)
    {
        Assert::That(positive_sum(std::vector <int> {1,2,3,4,5}), Equals(15));
        Assert::That(positive_sum(std::vector <int> {1,-2,3,4,5}), Equals(13));
        Assert::That(positive_sum(std::vector <int> {-1,2,3,4,-5}), Equals(9));
    }
    It(returns_0_when_array_is_empty)
    {
        Assert::That(positive_sum(std::vector <int> {}), Equals(0));
    }
    It(returns_0_when_all_elements_are_negative)
    {
        Assert::That(positive_sum(std::vector <int> {-1,-2,-3,-4,-5}), Equals(0));
    }
};