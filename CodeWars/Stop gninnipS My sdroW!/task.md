# **Stop gninnipS My sdroW!**

## **Uzrakstiet funkciju, kas paņem viena vai vairāku vārdu virkni un atgriež to pašu virkni, bet ar visiem pieciem vai vairākiem burtiem apgrieztiem vārdiem (tāpat kā šīs Katas nosaukums). Ievadītās virknes sastāvēs tikai no burtiem un atstarpēm. Atstarpes tiks iekļautas tikai tad, ja būs vairāk nekā viens vārds.**
------
## **Piemēram:**

* ### spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" 
* ### spinWords( "This is a test") => returns "This is a test" 
* ### spinWords( "This is another test" )=> returns "This is rehtona test"
  
---
## **Rezultāti**


###    Single_Word
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Mulitple_Words
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_Sentences_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>
  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
// TODO: Replace examples and use TDD development by writing your own tests

Describe(Sample_Tests)
{
    It(Single_Word)
    {
        Assert::That(spinWords("Welcome"), Equals("emocleW"));
        Assert::That(spinWords("to"), Equals("to"));
        Assert::That(spinWords("CodeWars"), Equals("sraWedoC"));
    }
    
    It(Mulitple_Words)
    {
      Assert::That(spinWords("Hey fellow warriors"), Equals("Hey wollef sroirraw"));
      Assert::That(spinWords("Burgers are my favorite fruit"), Equals("sregruB are my etirovaf tiurf"));
      Assert::That(spinWords("Pizza is the best vegetable"), Equals("azziP is the best elbategev"));
    }
};