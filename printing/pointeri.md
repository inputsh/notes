# Pointeri

Varijabla ima dvije vrijednosti:
1. "Pravu" vrijednost (u `k = 2` prava vrijednost je 2)
2. Memorijsku lokaciju za varijablu određene dužine koja zavisi od tipa podataka (u `k = 2` memorijska lokacija sadrži 4 bajta pošto je integer u pitanju)

Sa `&` označavamo da želimo da ispišemo adresnu lokaciju varijable umjesto njene vrijednosti.

Opšta deklaracija:

```c
int a;  // deklarišemo varijablu a;
int *p; // deklarišemo pointer p;
p = &a; // asociramo pointer p sa varijablom a;
```

Neki oblici `printf` komande:

```c
printf("%p\n", p);  // vraća adresu varijable a
printf("%p\n", &a); // vraća adresu varijable a
printf("%p\n", &p); // vraća adresu pointera p
printf("%d\n", *p); // vraća vrijednost varijable a
printf("%d\n", a);  // vraća vrijednost varijable a
```

Ako uradimo `*p = 12` dodijelićemo vrijednost 12 nazad na varijablu a (takozvani dereferencing).

Možemo raditi neke proste matematičke operacije sa pointerima. `p+1` će nam dati adresu povećanu za 4 mjesta (pošto integer zauzima 4 bajta). Ukoliko pokušamo da dođemo do vrijednosti koja se krije iza `p+1`, dobićemo junk data jer ne možemo predvidjeti šta će se desiti četri mjesta "ispred" pointera `p`.

```c
int a = 5;
int b = 10;
int *p;
p = &a;
printf("%d\n", *p); // printa vrijednost a (5)
*p = b;             // dodjeljuje vrijednost iz b u a
printf("%d\n", a);  // sada printa vrijednost b (10)
printf("%d\n", *p); // sada printa vrijednost b (10)
```

`void` označava nedeklarisani tip podatka. Kada deklarišemo pointer kao `void`, možemo sa njim raditi sve što možemo i sa "normalnim" pointerima _osim_ dereferenciranja.__amd64

Možemo kreirati neograničen broj pointera prema pointerima. Ukoliko napišemo:

```c
int a = 5;
int *b;
int **c;
b = &a;
c = &b;
```

...dobijemo da pointer `c` zapravo pokazuje na pointer `b` koji pokazuje na vrijednost iz `a`. Kada to printamo, dobijemo sljedeće:__amd64

```c
printf("%d\n", a);   // vraća 5
printf("%p\n", &a);  // vraća adresu varijable a
printf("%d\n", *b);  // vraća 5
printf("%p\n", &b);  // vraća adresu pointera b
printf("%d\n", **c); // vraća 5
printf("%p\n", &c);  // vraća adresu pointera c
```

Da bismo koristili varijable u nekoj drugoj funkciji (a ne u `main`), _moramo_ koristiti pointere.

Neispravan primjer:

```c
void increment(int a){
  a = a+1;}
int main() {
  int a = 10;
  increment(a);
  printf("%d\n", a);    // ispisuje 10 umjesto 11
}
```

Ispravan primjer:

```c
void increment(int *a){
  *a = *a + 1;}
int main(){
  int a = 10;
  increment(&a);
  printf("%d\n", a);    // ispisuje 11
}
```

Dakle, iz `main` funckije umjesto varijable šaljemo adresu varijable. Iz pomoćne funkcije radimo dereferencing i na osnovu njega radimo šta god trebamo da radimo sa varijablom.
