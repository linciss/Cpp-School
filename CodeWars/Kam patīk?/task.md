# **Kam patīk**

## **Jūs droši vien zināt "patīk" sistēmu no Facebook un citām lapām. Cilvēki var atzīmēt "patīk" emuāra ierakstus, attēlus vai citus vienumus. Mēs vēlamies izveidot tekstu, kas būtu jāparāda blakus šādam vienumam. Ieviesiet funkciju, kas aizņem masīvu, kurā ir to cilvēku vārdi, kuriem patīk kāds vienums. Tam ir jāatgriež displeja teksts, kā parādīts piemēros**
------
## **Piemēram:**
* ### [] --> "tas nevienam nepatīk"
* ### ["Pēteris"] --> "Pēterim patīk šis"
* ### ["Jēkabs", "Alekss"] --> "Jēkabam un Aleksam patīk šis"
* ### ["Makss", "Jānis", "Marks"] --> "Maksim, Jānim un Markam patīk šis" 
* ### ["Alekss", "Jēkabs", "Marks", "Makss"] --> "Aleksam, Džeikobam un 2 citiem patīk šis"


  
---
## **Rezultāti**


###    vajadzētu_atgriezt_pareizo_tekstu
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### nejaušs_viens_vārds
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### nejauši_vārdu_pāri
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

###  nejaušs_3_vārdu_kopa
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### nejauši_4_vai_vairāk_vārdu_kopa
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
#include <vector>

std::string likes(const std::vector<std::string> &names);

Describe(sample_tests)
{
    It(should_return_correct_text)
    {
        Assert::That(likes({}), Equals("no one likes this"));
        Assert::That(likes({"Peter"}), Equals("Peter likes this"));
        Assert::That(likes({"Jacob", "Alex"}), Equals("Jacob and Alex like this"));
        Assert::That(likes({"Max", "John", "Mark"}), Equals("Max, John and Mark like this"));
        Assert::That(likes({"Alex", "Jacob", "Mark", "Max"}), Equals("Alex, Jacob and 2 others like this"));
    }
};

