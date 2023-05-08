# **Noņem iekavas**

## **Jūsu uzdevums ir noņemt visu, kas atrodas iekavās, kā arī pašas iekavas.**
------
## **Piemēram:**

* ### "example(unwanted thing)example" --> "exampleexample"

---
## **Rezultāti**


###    fixed_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

### random_tests
- #### <span style="color:green">:heavy_check_mark: Pārbaude nokārtota</span>

  
### <span style="color:green"> Jūs esat nokārtojis visus pārbaudījumus! :)</span>

---
## **Testu paraugi**

```
#include <string>
#include <utility>
#include <vector>

std::string remove_parentheses(const std::string &str);

void do_test(const std::string &str, const std::string &expected)
{
    Assert::That(remove_parentheses(str), Equals(expected));
}

Describe(sample_test)
{
    It(basic_tests)
    {
        for (auto trial : std::vector<std::pair<std::string,std::string>> {
                          {"example(unwanted thing)example", "exampleexample"},
                          {"example(unwanted thing)example", "exampleexample"},
                          {"example (unwanted thing) example", "example  example"},
                          {"a (bc d)e", "a e"},
                          {"a(b(c))", "a"},
                          {"hello example (words(more words) here) something", "hello example  something"},
                          {"(first group) (second group) (third group)", "  "}
        })
            do_test(trial.first, trial.second);
    }
};

