# **Dilstošā secībā**

## **Jūsu uzdevums ir izveidot funkciju, kas var izmantot jebkuru nenegatīvu veselu skaitli kā argumentu un atgriezt to ar cipariem dilstošā secībā. Būtībā pārkārtojiet ciparus, lai izveidotu pēc iespējas lielāku skaitli.**
------
## **Piemēram:**

* ### Ievade: 42145 Izvade: 54421
* ### Ievade: 145263 Izvade: 654321
* ### Ievade: 123456789 Izvade: 987654321

  
---
## **Rezultāti**


###    should_work_on_several_examples
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_work_on_different_examples
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_work_on_random_examples
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <cinttypes>

uint64_t descendingOrder(uint64_t);

Describe(testDescendingOrder)
{
    It(should_work_on_several_examples)
    {
        Assert::That(descendingOrder(0), Equals(0));
        Assert::That(descendingOrder(1), Equals(1));
        Assert::That(descendingOrder(15), Equals(51));
        Assert::That(descendingOrder(1021), Equals(2110));
        Assert::That(descendingOrder(123456789), Equals(987654321));
    }
};