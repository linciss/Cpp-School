
# **Sadali virkni**

## **Pabeidziet risinājumu tā, lai tas sadalītu virkni divu rakstzīmju pāros. Ja virknē ir nepāra rakstzīmju skaits, tai jāaizstāj pēdējā pāra trūkstošā otrā rakstzīme ar pasvītrojumu ('_').**
------
## **Piemēram:**

* ### * 'abc' =>  ['ab', 'c_']

* ### * 'abcdef' => ['ab', 'cd', 'ef']


---
## **Rezultāti**


###   empty_string
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### even_length
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
  ###   odd_length
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### spaces
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
###   random
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
// TODO: Replace examples and use TDD development by writing your own tests

Describe(sample_test)
{
    It(even_length)
    {
       do_test("abcdef", {"ab", "cd", "ef"});
       do_test("HelloWorld", {"He", "ll", "oW", "or", "ld"});
    }
    It(odd_length)
    {
       do_test("abcde", {"ab", "cd", "e_"});
       do_test("LovePizza", {"Lo", "ve", "Pi", "zz", "a_"});
    }
};