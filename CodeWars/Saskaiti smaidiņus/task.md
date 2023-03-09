# **Saskaiti smaidīgās sejas!**

## **Ar masīvu (arr) kā argumentu pabeidziet funkciju countSmileys, kurai jāatgriež kopējais smaidošo seju skaits. Noteikumi smaidošai sejai: Katrā smaidošajā sejā ir jābūt derīgam acu pārim. Acis var atzīmēt kā: vai ;Smaidošai sejai var būt deguns, bet tam nav jābūt. Derīgās rakstzīmes degunam ir - vai ~Katrai smaidošai sejai ir jābūt smaidošai mutei, kas jāatzīmē ar ) vai D Nav atļautas nekādas papildu rakstzīmes, izņemot tās, kas minētas. Derīgi smaidiņu piemēri: :) :D ;-D :~) Nederīgas smaidošās sejas: ;( :> :} :]**
------
## **Piemēram:**

* ### countSmileys([':)', ';(', ';}', ':-D']); // jāatgriež 2;
* ### countSmileys([';D', ':-(', ':-)', ';~)']); // jāatgriež 3;
* ### countSmileys([';]', ':[', ';*', ':$', ';-D']); // jāatgriež 1;
  
---
## **Rezultāti**


###    Pamata_testēšana
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_testing
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
Describe(Tests)
{
  It(Basic_testing)
  {
    Assert::That(countSmileys({}), Equals(0));
    Assert::That(countSmileys({":D", ":~)", ";~)", ":)"}), Equals(4));
    Assert::That(countSmileys({":)", ":(", ":D", ":O", ":;"}), Equals(2));      
    Assert::That(countSmileys({";]", ":[", ";*", ":$", ";-D"}), Equals(1));   
  }
};