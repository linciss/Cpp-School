# **Masīva vienādas malas**

## **Jums tiks dots veselu skaitļu masīvs. Jūsu uzdevums ir ņemt šo masīvu un atrast indeksu N, kur veselo skaitļu summa pa kreisi no N ir vienāda ar veselu skaitļu summu, kas atrodas pa labi no N. Ja nav indeksa, kas to varētu īstenot, atgriezieties - 1.**
------
## **Piemēram:**

* ### Pieņemsim, ka jums ir dots masīvs {1,2,3,4,3,2,1}: jūsu funkcija atgriezīs indeksu 3, jo masīva 3. pozīcijā ir kreisās puses summa. indekss ({1,2,3}) un indeksa labās puses summa ({3,2,1}) ir vienādi ar 6.
---
## **Rezultāti**


###  PamataTesti
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### NejaušsTests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
#include <vector>
using namespace std;

Describe (ShouldPassAllTheTestsProvided)
{
    It (CoreTests)
    {
      {
        vector <int> numbers { 1,2,3,4,3,2,1 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
      
      {
        vector <int> numbers { 1,100,50,-51,1,1 };
        int expected = 1;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 1,2,3,4,5,6 };
        int expected = -1;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 20,10,30,10,10,15,35 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 20,10,-80,10,10,15,35 };
        int expected = 0;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 10,-80,10,10,15,35,20 };
        int expected = 6;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 0,0,0,0,0 };
        int expected = 0;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
      
      {
        vector <int> numbers { -1,-2,-3,-4,-3,-2,-1 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
    }
};
