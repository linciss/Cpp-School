# **Izskaiti burtus virknē**

## **Galvenā ideja ir saskaitīt visas virknē sastopamās rakstzīmes.**
------
## **Piemēram:**

* ###  aba  -->  {'a': 2, 'b': 1}

---
## **Rezultāti**


###    should_return_empty
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_return_two_a
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_return_two_a_and_two_b
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_pass_random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <map>

using m = std::map<char, unsigned>;

Describe(SampleTests)
{
    It(should_pass_sample_tests)
    {
        Assert::That(count("aba"), Equals(m{{ 'a', 2 }, { 'b', 1 }}), ExtraMessage("Incorrect result for \"aba\""));
        Assert::That(count(""), Equals(m{}), ExtraMessage("Incorrect result for \"\""));
    }
};

