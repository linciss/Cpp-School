# **N-tā Fibonači**

## **Es mīlu Fibonači skaitļus kopumā, taču jāatzīst, ka daži man patīk vairāk nekā citi. Es vēlētos, lai jūs man uzrakstītu funkciju, kas, piešķirot skaitli n (n >= 1 ), atgriež n-to skaitli Fibonači secībā.**
------
## **Piemēram:**

* ### nthFibo(4) == 2 Jo 2 ir 4. skaitlis Fibonači secībā. Atsauces nolūkā pirmie divi skaitļi Fibonači secībā ir 0 un 1, un katrs nākamais skaitlis ir iepriekšējo divu summa.

---
## **Rezultāti**


###    Short_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Larger_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
#include <string>

int nthFibo(int n);

// TODO: Replace examples and use TDD by writing your own tests

Describe(Sample_Tests)
{
  It(Example_Tests)
  {
    Assert::That(nthFibo(1), Equals(0), ExtraMessage("Incorrect answer for n=1"));
    Assert::That(nthFibo(2), Equals(1), ExtraMessage("Incorrect answer for n=2"));
    Assert::That(nthFibo(3), Equals(1), ExtraMessage("Incorrect answer for n=3"));
    Assert::That(nthFibo(4), Equals(2), ExtraMessage("Incorrect answer for n=4"));
    
    Assert::That(nthFibo(40), Equals(63245986), ExtraMessage("Incorrect answer for n=40"));
  }
};

