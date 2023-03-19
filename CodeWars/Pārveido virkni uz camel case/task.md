# **Pārvērst virkni kamieļa futrālī**

## **Aizpildiet metodi/funkciju, lai domuzīmes/pasvītras norobežotos vārdus pārvērstu kamieļa apvalkā. Pirmais vārds izvadē ir jāraksta ar lielo burtu tikai tad, ja sākotnējais vārds tika rakstīts ar lielo burtu (pazīstams kā lielais kamieļa burts, bieži saukts arī par Paskāla burtu). Nākamie vārdi vienmēr ir jāraksta ar lielo burtu.**
------
## **Piemēram:**

* ### "the-stealth-warrior" tiks pārveidots uz "theStealthWarrior"

* ### "The_Stealth_Warrior" tiks pārveidots uz "TheStealthWarrior"

* ### "The_Stealth-Warrior" tiks pārveidots uz "TheStealthWarrior"
  
---
## **Rezultāti**


###    Basic_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(Testing_function_to_camel_case)
{
    It(Basic_tests)
    {
        Assert::That(to_camel_case(""), Equals(""));
        Assert::That(to_camel_case("the_stealth_warrior"), Equals("theStealthWarrior"));
        Assert::That(to_camel_case("The-Stealth-Warrior"), Equals("TheStealthWarrior"));
        Assert::That(to_camel_case("A-B-C"), Equals("ABC"));
    }
};