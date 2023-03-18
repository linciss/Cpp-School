# **Vai skaitlis ir pirmskaitlis?**

## **Definējiet funkciju, kas izmanto vesela skaitļa argumentu un atgriež loģisko vērtību true vai false atkarībā no tā, vai veselais skaitlis ir pirmskaitlis.**
------
## **Piemēram:**

* ### is_prime(1) /* false */

* ### is_prime(2) /* true */

* ### is_prime(-1) /* false */
  
---
## **Rezultāti**

###   Kāds_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Negatīvs_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Nejaušs_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(is_Prime)
{
    It(Sample_Test)
    {
        Assert::That(isPrime(1), Equals(false));
        Assert::That(isPrime(3), Equals(true));
        Assert::That(isPrime(5), Equals(true));
    }

};