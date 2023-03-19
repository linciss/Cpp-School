# **Atrodiet paritātes novirzi**

## **Jums tiek dots masīvs (kura garums būs vismaz 3, bet var būt ļoti liels), kas satur veselus skaitļus. Masīvs pilnībā sastāv no nepāra veseliem skaitļiem vai pilnībā sastāv no pāra veseliem skaitļiem, izņemot vienu veselu skaitli N. Uzrakstiet metodi, kas izmanto masīvu kā argumentu un atgriež šo "ārpusējo" N.**
------
## **Piemēram:**

* ### [2, 4, 0, 100, 4, 11, 2602, 36] Jāatgriež: 11 (vienīgais nepāra skaitlis)

* ### [160, 3, 1719, 19, 11, 13, -21] Jāatgriež: 160 (vienīgais pāra skaitlis)


---
## **Rezultāti**


###   Simple_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Other_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Negative_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
void test_for(std::vector<int> arr, int result)
{
    std::cout << "Testing for {";
    std::string cone = ", ";
    for (std::vector<int>::const_iterator i = arr.begin(); i != arr.end(); ++i)
    {
      if (*i == arr.rbegin()[0]) cone = "";
      std::cout << *i << cone;
    }
    std::cout << "}" << std::endl;
    Assert::That(FindOutlier(arr), Equals(result));
}

Describe(Test_Cases)
{
    It(Simple_Tests)
    {
        test_for({2, 3, 4}, 3);
        test_for({1, 2, 3}, 2);
        test_for({4, 1, 3, 5, 9}, 4);
    }
};