# **Divi pret vienu**

## **Paņemiet 2 virknes s1 un s2, kas ietver tikai burtus no a līdz z. Atgrieziet jaunu sakārtotu virkni, visgarāko iespējamo, kas satur atšķirīgus burtus (katrs ņemts tikai vienu reizi), kas nāk no s1 vai s2.**
------
## **Piemēram:**

* ###  a = "xyaabbbccccdefww"
* ###  b = "xxxxyyyyabklmopq"
* ### longest(a, b) -> "abcdefklmopqwxy"

  
---
## **Rezultāti**


###    Fixed__Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_longest
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <string>
void testequal(std::string ans, std::string sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(std::string a1, std::string a2, std::string expected)
{
    testequal(TwoToOne::longest(a1, a2), expected);
}
Describe(longest_Tests)
{
    It(Fixed__Tests)
    {
        dotest("aretheyhere", "yestheyarehere", "aehrsty");
        dotest("loopingisfunbutdangerous", "lessdangerousthancoding", "abcdefghilnoprstu");
    }
};

