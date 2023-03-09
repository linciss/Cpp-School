# **Bitu sakitīšana**

## **Ir masīvs ar dažiem skaitļiem. Visi skaitļi ir vienādi, izņemot vienu. Mēģiniet to atrast!**
------
## **Piemēram:**

* ### find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
* ### find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55

  
---
## **Rezultāti**


###    vajadzētu_jāatgriezt_unikālo_numuru
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###    vajadzētu_atgriezt_neapkrāpto_unikālo_numuru
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
extern float find_uniq(const std::vector<float> &v);

Describe(Sample_Test)
{
    It(should_return_the_unique_number)
    {
        Assert::That(find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1}), Equals(2.f));
        Assert::That(find_uniq(std::vector<float>{ 0, 0, 0.55, 0, 0 }), Equals(0.55f));
        Assert::That(find_uniq(
            std::vector<float>{
                999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666
            }),
            Equals(999.f)
        );
    }
};