# **Duplikācijas kodētājs**

## **Šī uzdevuma mērķis ir pārvērst virkni par jaunu virkni, kur katra rakstzīme jaunajā virknē ir "(", ja šī rakstzīme sākotnējā virknē parādās tikai vienu reizi, vai ")", ja šī rakstzīme sākotnējā virknē parādās vairāk nekā vienu reizi. virkne. Ignorējiet lielo burtu lietojumu, nosakot, vai rakstzīme ir dublikāts.**
------
## **Piemēram:**

* ###  "din"      =>  "((("
* ###  "recede"   =>  "()()()"
* ###  "Success"  =>  ")())())"
* ###  "(( @"     =>  "))((" 


---
## **Rezultāti**


###    Basic_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_Test
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
// TODO: Replace examples and use TDD development by writing your own tests

Describe(Tests)
{  
    It(Basic_Tests)
    {
        Assert::That(duplicate_encoder("din"), Equals("((("));
        Assert::That(duplicate_encoder("recede"), Equals("()()()"));
        Assert::That(duplicate_encoder("Success"), Equals(")())())"));
        Assert::That(duplicate_encoder("CodeWarrior"), Equals("()(((())())"));
        Assert::That(duplicate_encoder("Supralapsarian"), Equals(")()))()))))()("));
        Assert::That(duplicate_encoder("(( @"), Equals("))(("));
        Assert::That(duplicate_encoder(" ( ( )"), Equals(")))))("));
    }
};
