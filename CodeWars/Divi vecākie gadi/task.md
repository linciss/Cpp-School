# **Divi vecākie gadi**

## **Ir jāpabeidz divas vecākās vecuma funkcijas/metode. Tam ir jāizmanto skaitļu masīvs kā arguments un jāatgriež divi lielākie skaitļi masīvā. Atgrieztajai vērtībai ir jābūt masīvam formātā [otrais vecākais vecums, vecākais vecums]. Ievadīto skaitļu secība var būt jebkura. Masīvā vienmēr būs vismaz 2 vienumi. Ja ir divi vai vairāki vecākais vecums, atgrieziet tos abus masīva formātā.**
------
## **Piemēram:**

* ###  [1, 2, 10, 8] --> [8, 10]
* ###  [1, 5, 87, 45, 8, 8] --> [45, 87]
* ###  [1, 3, 10, 0]) --> [3, 10]

  
---
## **Rezultāti**


###    ShouldSolveSimpleTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### ShouldSolveMoreTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### RandomTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <vector>

std::array<int, 2> two_oldest_ages(std::vector<int> ages);

void do_test(const std::vector<int> &ages, const std::array<int, 2> &expected)
{
    Assert::That(two_oldest_ages(ages), Equals(expected));
}

Describe(TwoOldestAges)
{
    It(ShouldSolveSimpleTests)
    {
        do_test({1,5,87,45,8,8}, {45, 87});
        do_test({6,5,83,5,3,18}, {18, 83});
    }
};void testequal(std::string ans, std::string sol) {
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

