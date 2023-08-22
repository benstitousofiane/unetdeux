# unetdeux⭕
Jeux de morpion pour apprendre le fonctionnement du slicing sur des matrices 2D en langage C

Le code que j'ai dévélopper seul est totallement libre de droit et de tout type utilisation (même commercial).
-> aucune mention necessaire, faites vous plaisir ;)

**Correctif disponible :** faire en sorte que l'application ne plante pas lorsque la partie se termine quand on lance via une fenêtre et non sur un terminale.
Correctif tester
Sera compiler bientôt !


# Binaires

Disponible dans release pour Linux initialement et Windows

# Fonctionnement et fonctionalités supplémentaires

Vous devrez entrer des nombre entier et essayer de comprendre comment posé les 1 et 2 sur la matrice en deux dimension pour pouvoir faire vos première parties.

tapez "quit" à un des moment de la partie pour quitter sans échec le programme, autrement si vous êtes un ou une professionnelle vous faites "CTRL + C".

# Compiler vous-même :
pour compiler le code et y faire votre propore programme personalisé il vous faudra d'abord clone le repo avec git ou gh :
(ici nous le ferons avec git)


```sh
git clone https://github.com/benstitousofiane/unetdeux.git
```
ensuite vous vous y déplacer sur le repo :

```sh
cd unetdeux
```

et enfin pour complier, deux manières :
- avec gcc (installer sous linux ou sous windows avec mingw :)

```sh
gcc unetdeux.c -o nomDeVotreChoix.ExtentionDeVotreChoix
```
!Sous windows l'extention sera .exe!

sous linux si vous souhaitez compiler pour windows avec mingw-w64-gcc

- Pour 32 bit :
```sh
i686-w64-mingw32-gcc -o nomDeVotreChoix.exe unetdeux.c
```
- Pour 64 bit
```sh
x86_64-w64-mingw32-gcc -o nomDeVotreChoix.exe unetdeux.c
```

Même si je suis en possession d'un macintosh, je ne déliverai pour le moment aucun executable pour mac.
vous pourrez faire votre propre executable en le compilant vous-même avec gcc en l'installant via X-Code.

Benstitou Sofiane.
