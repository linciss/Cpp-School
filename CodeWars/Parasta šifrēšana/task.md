# **Pamata šifrēšana**

## **Visvienkāršākā šifrēšanas metode ir zīmēt ar citu zīmi pēc noteikta matemātikas likuma. Tā kā katrai zīmei ir ASCII vērtība, mēs varam manipulēt ar šo vērtību, izmantojot vienkāršu matemātisko izteiksmi. Piemēram, "a" + 1 mums dotu "b", jo "a" vērtība ir 97 un "b" vērtība ir 98. Jums būs jāraksta metode, kas tieši to dara - iegūstiet virkni kā tekstu un int kā manipulācijas noteikums, un tam ir jāatgriež šifrēts teksts.**

------
## **Piemēram:**

* ### encrypt("a",1) = "b"

* ### Mūsu jautājumam tiek izmantota pilna ascii tabula (256 rakstzīmes) — tātad derīgās vērtības ir no 0 līdz 255. Ja vērtība pārsniedz 255, tai vajadzētu "iesaiņot". ti. ja vērtība ir 345, tai vajadzētu aplauzt līdz 89.
---
## **Rezultāti**


###   basic_test
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### random_test
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(basic_encryption)
{
    It(basic_test)
    {
        Assert::That(encrypt("",1), Equals(""));
        Assert::That(encrypt("a",1), Equals("b"));
        Assert::That(encrypt("please encrypt me",2), Equals("rngcug\"gpet{rv\"og"));
    }
};
