# **Pavirzīt nulles līdz galam**

## **Uzrakstiet algoritmu, kas ņem masīvu un pārvieto visas nulles uz beigām, saglabājot pārējo elementu secību.**
------
## **Piemēram:**

* ### move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}
---
## **Rezultāti**


###   Mixed_data
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### All_zeroes
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### No_zeroes
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_cases
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <vector>

Describe(Fixed_tests) {
  It(Mixed_data) {
    Assert::That(move_zeroes(std::vector<int>{1, 2, 0, 1, 0, 1, 0, 3, 0, 1}), 
                 Equals(std::vector<int>{1, 2, 1, 1, 3, 1, 0, 0, 0, 0}));
  }
  It(All_zeroes) {
    Assert::That(move_zeroes(std::vector<int>{0, 0, 0, 0, 0, 0}), 
                 Equals(std::vector<int>{0, 0, 0, 0, 0, 0}));
  }
  It(No_zeroes) {
    Assert::That(move_zeroes(std::vector<int>{1, 2, 5, 1, 5, 1, 5, 3, 2, 1}), 
                 Equals(std::vector<int>{1, 2, 5, 1, 5, 1, 5, 3, 2, 1}));
  }
};