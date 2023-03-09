# **uztaisi telefona numuru**

## **Uzrakstiet funkciju, kas pieņem 10 veselu skaitļu masīvu (no 0 līdz 9), kas atgriež šo skaitļu virkni tālruņa numura formā.**
------
## **Piemēram:**

* ### CreatePhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => atgriež "(123) 456-7890". Lai izpildītu šo izaicinājumu, atgrieztajam formātam ir jābūt pareizam. Neaizmirstiet atstāt atstarpi aiz noslēdzošajām iekavām!
  
---
## **Rezultāti**


###    Pamatpārbaudes
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušiTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
using arr = int [10];

Describe(CreatePhoneNumber) {
    It(BasicTests) {
        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}), Equals("(123) 456-7890"));
        Assert::That(createPhoneNumber(arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}), Equals("(111) 111-1111"));
        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 8, 8, 0, 0}), Equals("(123) 456-8800"));
        Assert::That(createPhoneNumber(arr{0, 2, 3, 0, 5, 6, 0, 8, 9, 0}), Equals("(023) 056-0890"));
        Assert::That(createPhoneNumber(arr{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}), Equals("(000) 000-0000"));
    }
};