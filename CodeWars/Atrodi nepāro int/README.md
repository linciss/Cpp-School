# **Atrodiet nepāra int**

## **Ņemot vērā veselu skaitļu masīvu, atrodiet to integeri, kas parādās nepāra reižu skaitu. Vienmēr būs tikai viens vesels skaitlis, kas parādās nepāra reižu skaitu.**
------
## **Piemēram:**

* ### [7] jāatgriež 7, jo tas parādās 1 reizi (kas ir nepāra).

* ### [1,1,2] ir jāatgriež 2, jo tas parādās 1 reizi (kas ir nepāra).
  
* ### [1,2,2,3,3,3,4,3,3,3,2,2,1] ir jāatgriež 4, jo tas parādās 1 reizi (kas ir nepāra).
  
---
## **Rezultāti**


###    PamataTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušiTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
using V = std::vector<int>;

Describe(FindOdd){
  It(BasicTests){
    Assert::That(findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}), Equals(5));
    Assert::That(findOdd(V{1,1,2,-2,5,2,4,4,-1,-2,5}), Equals(-1));
    Assert::That(findOdd(V{20,1,1,2,2,3,3,5,5,4,20,4,5}), Equals(5));
    Assert::That(findOdd(V{10}), Equals(10));
    Assert::That(findOdd(V{1,1,1,1,1,1,10,1,1,1,1}), Equals(10));
  }
};