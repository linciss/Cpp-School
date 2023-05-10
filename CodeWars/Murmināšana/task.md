# **Murmināšana**

## **Šoreiz bez stāsta, bez teorijas. Tālāk sniegtie piemēri parāda, kā rakstīt funkciju akumulatoru:**
------
## **Piemēram:**

* ### accum("abcd") -> "A-Bb-Ccc-Dddd"

* ### accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"

* ### accum("cwAt") -> "C-Ww-Aaa-Tttt"
  
---
## **Rezultāti**


###    Fixed_Tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### Random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
void testequal(std::string ans, std::string sol) {
    Assert::That(ans, Equals(sol));
}
static void dotest(std::string s, std::string expected)
{
    testequal(Accumul::accum(s), expected);
}
Describe(accum_Tests)
{
    It(Fixed_Tests)
    {
        dotest("ZpglnRxqenU", "Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-Uuuuuuuuuuu");
        dotest("NyffsGeyylB", "N-Yy-Fff-Ffff-Sssss-Gggggg-Eeeeeee-Yyyyyyyy-Yyyyyyyyy-Llllllllll-Bbbbbbbbbbb");
    }
};

