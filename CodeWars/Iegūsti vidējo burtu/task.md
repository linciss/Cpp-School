# **Iegūsti vidējo burtu**

## **Jums tiks dots vārds. Jūsu uzdevums ir atgriezt vārda vidējo rakstzīmi. Ja vārda garums ir nepāra, atgrieziet vidējo rakstzīmi. Ja vārda garums ir pāra garums, atgrieziet vidējās 2 rakstzīmes.**
------
## **Piemēram:**

* ###  Kata.getMiddle("test") jāatgriež "es"
* ###  Kata.getMiddle("testing") jāatgriež "t"
* ###  Kata.getMiddle("middle") jāatgriež "dd"
* ###  Kata.getMiddle("A") jāatgriež "A"

  
---
## **Rezultāti**


###     PamataTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušieTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(get_middle_algorithm)
{
    It(should_handle_basic_tests)
    {
        Assert::That(get_middle("test"), Equals("es"));
        Assert::That(get_middle("testing"), Equals("t"));;
    }
};
