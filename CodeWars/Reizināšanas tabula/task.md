
# **Reizināšanas tabula**

## **Tavs uzdevums ir izveidot N×N reizināšanas tabulu, kuras izmērs norādīts parametrā.**
------
## **Piemēram:**

* ### 3 ==> [[1,2,3],[2,4,6],[3,6,9]]

---
## **Rezultāti**


###   Fixed_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Test_Random_Numbers
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
#include <vector>

using namespace std;
vector<vector<int>> test({{1,2,3},{2,4,6},{3,6,9}});

Describe(Multiplication_Table) {
    It(BasicTests) {
        Assert::That(multiplication_table(3), Equals(test));
    }
};