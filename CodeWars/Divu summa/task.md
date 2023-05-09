# **Divu summa**

## **Uzrakstiet funkciju, kas ņem skaitļu masīvu (veselus skaitļus testiem) un mērķa skaitli. Tam masīvā jāatrod divi dažādi vienumi, kurus saskaitot kopā tiek iegūta mērķa vērtība. Pēc tam šo vienumu indeksi jāatdod korejā/sarakstā (atkarībā no jūsu valodas), piemēram: (indekss1, indekss2).**
------
## **Piemēram:**

* ###  two_sum({1, 2, 3}, 4); // atgriež {0, 2} or {2, 0}

---
## **Rezultāti**


###    should_pass_some_fixed_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### should_pass_some_randomized_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**
```
Describe(test_two_sum)
{
    void do_test(const std::vector<int>& numbers, int target) {
        auto result = two_sum(numbers, target);
        Assert::That(result.first != result.second);
        Assert::That(numbers[result.first] + numbers[result.second], Equals(target));
    }
    It(should_pass_some_fixed_tests)
    {
        Assert::That(two_sum({1, 2, 3}, 4), Fulfills(EqualsUnordered{0, 2}));
        Assert::That(two_sum({1234, 5678, 9012}, 14690), Fulfills(EqualsUnordered{1, 2}));
        Assert::That(two_sum({2, 2, 3}, 4), Fulfills(EqualsUnordered{0, 1}));
    }
};
