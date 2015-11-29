# Korišćenje pointera

Pointeri se koriste kada god radimo sa nizovima (bilo da je u pitanju niz integera ili niz karaktera) i izvršavamo komande u različitim funkcijama. Kada šaljemo niz u drugu funkciju, ono što zapravo šaljemo jeste adresu niza u memoriji. Ovime sprječavamo duplanje veće količine podataka.

## Nizovi integera

Ukoliko imamo neki niz:

```c
int a[5] = {2, 4, 3, 7, 5};
```

i onda izvršimo nešto poput:

```c
printf("%d\n", *a);
```

kao rezultat ćemo dobiti prvu vrijednost niza (2). Ukoliko umjesto `*a` stavimo `*(a+1)` dobićemo vrijednost drugog člana niza, sa `*(a+2)` dobijamo treći član itd.

Da bismo dobili sve članove niza, vršimo loop:

```c
for (i=0; i<5; i++)
{
  printf("%d\n", a[i]); // a[i] možemo zamijeniti sa *(a+i)
}
```

### Nizovi integera u funkcijama

Ako deklarišemo neku funkciju ovako:

```c
int nekaFunkcija (int a[])
{
  //neki kod
}
```

Nećemo slati pun niz. Umjesto toga, šaljemo adresu prvog člana niza (što se zove call-by-reference). Dakle `nekaFunkcija(a)` je isto što i `nekaFunkcija (&a[0])`. Kao posljedicu ovoga, ne možemo da radimo operacije sa nizovima u funkciji već takve operacije moramo da izvršavamo iz funkcije iz koje šaljemo vrijednosti u novu funkciju.
