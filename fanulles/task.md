# **Uzdevums**
>Uzrakstiet programmu, kas dotai n vērtībai nosaka, ar cik nullēm beidzas n faktoriāla pieraksts!

## **Paraugdati**

## Stdin
```
3
```

## Stdout
```
0
```

## Stdin
```
54321
```

## Stdout
```
13576
```

# **Rezultāti**
>Vērtējums: 13/13
```
#include <iostream>
using namespace std;

int main(){
   int n, count=0;
   long long factorial=1;
    cin >>  n;
    for(int i=1;i<=n;i++)factorial*=i;
    
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    cout << count;
}



