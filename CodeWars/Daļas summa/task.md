# **Daļas summa**

## **Funkcija parts_sums (vai tās varianti citās valodās) kā parametru izmantos sarakstu ls un atgriež sarakstu ar tā daļu summām**
------
## **Piemēram:**

* ### ls = [1, 2, 3, 4, 5, 6] 
* ### parts_sums(ls) -> [21, 20, 18, 15, 11, 6, 0]

* ### ls = [744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358]
* ### parts_sums(ls) -> [10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 0]

  
---
## **Rezultāti**


###    Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Small_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Big_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
using V = std::vector<unsigned long long>;

Describe(PartsSum){
  It(BasicTests){
    Assert::That(partsSum({0, 1, 3, 6, 10}), Equals(V{20, 20, 19, 16, 10, 0}));
    Assert::That(partsSum({1, 2, 3, 4, 5, 6}), Equals(V{21, 20, 18, 15, 11, 6, 0}));
    Assert::That(partsSum({744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358}), Equals(V{10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 0}));
    Assert::That(partsSum({30350, 76431, 156228, 78043, 98977, 80169, 32457, 182875, 162323, 17508, 57971, 171907}), Equals(V{1145239, 1114889, 1038458, 882230, 804187, 705210, 625041, 592584, 409709, 247386, 229878, 171907, 0}));
    Assert::That(partsSum({158077, 143494, 196531, 26272, 35656, 68756, 109861, 36958, 83895, 134127, 81618, 193758, 143422}), Equals(V{1412425, 1254348, 1110854, 914323, 888051, 852395, 783639, 673778, 636820, 552925, 418798, 337180, 143422, 0}));
  }
};
