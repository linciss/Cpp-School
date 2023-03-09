# **3 vai 5 reizinātāji**

## **Ja mēs uzskaitām visus naturālos skaitļus zem 10, kas ir 3 vai 5 reizinātāji, mēs iegūstam 3, 5, 6 un 9. Šo reizinātāju summa ir 23. Pabeidziet risinājumu tā, lai tas atgrieztu visu 3 vai 5 reizinājumu summu zem ievadītā skaitļa. Turklāt, ja skaitlis ir negatīvs, atgrieziet 0 (valodām, kurās tie ir).**
------
## **Piemēram:**

* ### [10] jāatgriež 23.

* ### [15] ir jāatgriež 45.
  
* ### [1] ir jāatgriež 0, jo tas 1 nedalās ne ar 3, ne ar 5.
  
---
## **Rezultāti**


### vajadzētu_apstrādāt_pamata_pārbaudes_gadījumus
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### vajadzētu_apstrādāt_mazākos_gadījumi
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### vajadzētu_apstrādāt_nejauši_pārbaudes_gadījumus
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>


  
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(solution_algorithm)
{
    It(should_handle_basic_test_cases)
    {
        Assert::That(solution(10), Equals(23));
    }
};