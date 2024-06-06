# unetdeux⭕
Jeux de morpion pour apprendre le fonctionnement du slicing sur des matrices 2D en langage C

Ce jeu a été fait pour apprendre à manipuler les pointeur en langage C

Le code que j'ai dévélopper seul est totallement libre de droit et de tout type utilisation (même commercial).
-> aucune mention necessaire, faites vous plaisir ;)

![image](https://github.com/benstitousofiane/unetdeux/assets/129552238/d25954a3-ebc4-49ce-ac78-467fc31a27e1)

# Binaires

Compilez le vous même

# Fonctionnement et fonctionalités supplémentaires

Vous devrez entrer des nombre entier et essayer de comprendre comment posé les 1 et 2 sur la matrice à deux dimensions pour pouvoir faire vos première parties.

tapez "quit" à un des moment de la partie pour quitter sans échec le programme, autrement si vous êtes un ou une professionnelle vous faites "CTRL + C".

# Compiler vous-même :
pour compiler le code et y faire votre propore programme personalisé il vous faudra d'abord clone le repo avec git ou gh :
(ici nous le ferons avec git)

# Compiler sous GNU/Linux :

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

# Compiler sous Windows :

Installer d'abord le compilateur portable C de Fabrice Bellard : https://bellard.org/tcc/

Puis compilez le cous windows en mettant le fichier C sous le même dossier que le dossier TCC

```sh
tcc.exe unetdeux.c -o nomDeVotreChoix.exe
```

Pour compliler sous MacOS vous devez installer Xcode qui installera automatiquement git et gcc.

Benstitou Sofiane.
