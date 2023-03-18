# **Dergas breketes**

## **Write a function that takes a string of braces, and determines if the order of the braces is valid. It should return true if the string is valid, and false if it's invalid.**
------
## **Piemēram:**

* ### "(){}[]"   =>  True
* ### "([{}])"   =>  True
* ### "(}"       =>  False
* ### "[(])"     =>  False
* ### "[({})](]" =>  False
  
---
## **Rezultāti**


### derīgas_breketes_pamata_testi
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### derīgas_breketes_grūtākas_pārbaudes
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
// Some macros for easy true/false assertions
#define assert_valid(s) \
  if(!valid_braces(s)) std::cout << "Expected " << s << " to be valid." << std::endl; \
  Assert::That(valid_braces(s), Equals(true));
#define assert_invalid(s) \
  if(valid_braces(s)) std::cout << "Expected " << s << " to be invalid." << std::endl; \
  Assert::That(valid_braces(s), Equals(false)); 

Describe(valid_braces_algorithm)
{
  It(basic_tests)
  {
    assert_valid( "()" );
    assert_invalid( "[(])" );
  }
};