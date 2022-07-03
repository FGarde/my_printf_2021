# my_printf

**Qu'est ce que c'est**

Le my_printf est un projet faisant parti du module PSU et il consiste à recoder la commande C de base, printf, ainsi que ses flags.

Les flags recréés sont :
- [x] Aucun flag
- [x] c
- [x] s
- [x] d i u

Le language utilisé est le C.

**Comment s'en servir**

my_printf est une fonction trouvable dans lib/my.

Ici, on peut la compiler avec la ligne de commande si dessous :
```make re && gcc main.c -Iinclude -L. -lmy && ./a.out``` 


Elle est donc à utiliser comme une fonction standard.

Par exemple :

```
int main(int argc, char **argv)
{
    char a = 'B';
    int b = 10;
    char *c = "PONG";

    my_printf("Strings, %s %s, int %d, char %c", c, d, b, a);
    return 0;
} 
```

Cela va renvoyer :

```
Strings, PONG test, int 10, char B
```

**Auteur**

Garde Florian
Tek 1
Promo 2026

florian.garde@epitech.eu