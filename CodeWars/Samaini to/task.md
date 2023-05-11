
# **Samaini to**

## **Ja ir norādīts skaitlis no 0 līdz 9, atgrieziet to vārdos.**
------
## **Piemēram:**

* ### * Input :: 1


* ### * Output :: "One".


---
## **Rezultāti**


###   Fixed_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <string>

Describe(Switch_it_Up)
{
    It(Fixed_tests)
    {
        Assert::That(switch_it_up(0), Equals("Zero"));
        Assert::That(switch_it_up(1), Equals("One"));
        Assert::That(switch_it_up(2), Equals("Two"));
        Assert::That(switch_it_up(3), Equals("Three"));
        Assert::That(switch_it_up(4), Equals("Four"));
        Assert::That(switch_it_up(5), Equals("Five"));
        Assert::That(switch_it_up(6), Equals("Six"));
        Assert::That(switch_it_up(7), Equals("Seven"));
        Assert::That(switch_it_up(8), Equals("Eight"));
        Assert::That(switch_it_up(9), Equals("Nine"));
    }
};
