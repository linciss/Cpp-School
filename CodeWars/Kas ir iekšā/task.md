# **Kas ir iekšā**

## **Ja tiek doti divi virkņu masīvi a1 un a2, atgriež sakārtotu masīvu r leksikogrāfiskā secībā no a1 virknēm, kas ir a2 virkņu apakšvirknes.**
------
## **Piemēram:**

* ### a1 = ["arp", "live", "strong"]

* ### a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

* ### atgriež ["arp", "live", "strong"]

---
## **Rezultāti**


###   Tests1
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Tests2
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Tests3
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Tests4
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Tests5
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Tests6
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <string>
#include <vector>

void testequal(std::vector<std::string> &ans, std::vector<std::string> &sol) {
    Assert::That(ans, Equals(sol));
}

Describe(inArrayTests)
{
    It(test1)
    {
        std::vector<std::string> arr1 = { "arp", "live", "strong" };
        std::vector<std::string> arr2 = { "lively", "alive", "harp", "sharp", "armstrong" };
        std::vector<std::string> sol1 = { "arp", "live", "strong" };
        std::vector<std::string> ans1 = WhichAreIn::inArray(arr1, arr2);
        testequal(ans1, sol1);
    }
};
