# Apprendre le C pour débutant — Projets et exercices

<p align="center">
  <strong>Apprendre le langage C en pratiquant, un programme à la fois.</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Langage-C-blue.svg" alt="Langage C">
  <img src="https://img.shields.io/badge/Niveau-Débutant-success.svg" alt="Niveau débutant">
  <img src="https://img.shields.io/badge/Statut-En%20apprentissage-orange.svg" alt="Statut">
</p>

## À propos du projet

Bienvenue dans ce dépôt !

Ce repository rassemble les programmes, exercices et projets pratiques associés à mon ebook **« Apprendre le C pour débutant »**.

L'objectif est simple : apprendre le langage C en écrivant réellement du code, en expérimentant et en comprenant progressivement le fonctionnement des programmes.

Tu y trouveras des exemples de code, des exercices, des corrections et plusieurs petits projets permettant de mettre en pratique les notions abordées dans le cours.

Ce dépôt est destiné principalement aux personnes qui découvrent le langage C et souhaitent progresser étape par étape.

## Objectifs pédagogiques

À travers les différents programmes de ce repository, tu vas apprendre à :

- Installer et configurer un environnement de développement en C.
- Comprendre le fonctionnement d'un programme C.
- Compiler et exécuter tes propres programmes avec GCC.
- Manipuler les variables et les différents types de données.
- Utiliser les conditions et les boucles.
- Créer et utiliser des fonctions.
- Manipuler des tableaux.
- Comprendre les structures (`struct`).
- Comprendre le passage des arguments aux fonctions.
- Manipuler les pointeurs et les adresses mémoire.
- Découvrir les listes chaînées et les listes doublement chaînées.
- Résoudre des problèmes algorithmiques à travers des exercices.

## Contenu du repository

Les projets suivent la progression pédagogique de l'ebook.

### 1. Installation et environnement de développement

Premiers pas avec le langage C :

- Installation de GCC sur Linux.
- Installation du compilateur sur Windows.
- Configuration de VS Code.
- Utilisation du terminal.
- Compilation et exécution d'un programme.

### 2. Découverte du langage C

Les bases du fonctionnement d'un programme :

- Structure d'un programme C.
- Fonction `main()`.
- Bibliothèque `stdio.h`.
- Fonction `printf()`.
- Compilation avec GCC.
- Affichage de messages dans le terminal.

### 3. Types de données et variables

Manipulation des données :

- `char`
- `short`
- `int`
- `long`
- `long long`
- `float`
- `double`
- `bool`
- Déclaration et initialisation des variables.
- Lecture des entrées avec `scanf()`.

### 4. Algorithmique et logique

Les outils fondamentaux pour construire des programmes :

- Conditions `if`, `else` et `switch`.
- Boucles `for`, `while` et `do while`.
- Opérateurs arithmétiques et logiques.
- Fonctions.
- Paramètres et valeurs de retour.

### 5. Exercices et projets pratiques

Des exercices pour passer de la théorie à la pratique :

| Projet | Concepts travaillés |
|---|---|
| FizzBuzz | Conditions et boucles |
| Calculatrice | Fonctions, conditions et `math.h` |
| Tableaux | Indices et manipulation des données |
| Tri à bulles | Tableaux et algorithmes de tri |
| Tri par sélection | Recherche du minimum et tri |
| Devine le nombre | Boucles, conditions et nombres aléatoires |
| Convertisseur FCFA / EUR | Variables et opérations arithmétiques |
| Nombre premier | Boucles et opérateur modulo |
| Pyramide d'étoiles | Boucles imbriquées |

### 6. Structures de données et mémoire

Une première approche de notions plus avancées :

- Les structures avec `struct`.
- Le passage par valeur.
- Les adresses mémoire.
- Les pointeurs.
- Les listes chaînées.
- Les listes doublement chaînées.

Cette dernière partie permet de commencer à comprendre comment les données peuvent être organisées et reliées en mémoire.

## Installation

Pour récupérer le repository sur ta machine, ouvre un terminal et exécute :

```bash
git clone URL_DU_REPOSITORY
```

Entre ensuite dans le dossier :

```bash
cd NOM_DU_REPOSITORY
```

Vérifie que GCC est installé :

```bash
gcc --version
```

Si tu utilises Ubuntu ou Debian et que GCC n'est pas installé :

```bash
sudo apt update
sudo apt install build-essential
```

## Compiler et exécuter un programme

Pour compiler un fichier C :

```bash
gcc main.c -o main
```

Pour exécuter le programme sous Linux :

```bash
./main
```

Sous Windows, avec MinGW :

```bash
gcc main.c -o main.exe
```

Puis :

```bash
.\main.exe
```

Pour activer les avertissements du compilateur, tu peux utiliser :

```bash
gcc -Wall -Wextra -std=c11 main.c -o main
```

## Comment utiliser ce repository ?

Si tu débutes complètement, voici la méthode que je te recommande :

1. Commence par les premiers exemples et assure-toi que ton environnement fonctionne.
2. Lis le chapitre correspondant dans l'ebook.
3. Ouvre le programme associé dans ce repository.
4. Tape le code toi-même au lieu de simplement le copier-coller.
5. Exécute le programme et observe son comportement.
6. Modifie le code pour comprendre ce qui change.
7. Essaie les exercices sans regarder les corrections.
8. Passe à la notion suivante lorsque tu as compris la précédente.

**Ne cherche pas simplement à faire fonctionner le code. Cherche à comprendre pourquoi il fonctionne.**

## Prérequis

Pour suivre les projets, tu auras besoin de :

- Un ordinateur sous Linux ou Windows.
- GCC (GNU Compiler Collection).
- Un éditeur de code, comme Visual Studio Code.
- Un terminal.
- De la curiosité et de la pratique !

Aucune connaissance avancée en programmation n'est nécessaire pour commencer.

## Philosophie du projet

Ce repository repose sur une idée :

> On n'apprend pas réellement à programmer en regardant du code. On apprend en écrivant, en testant, en faisant des erreurs et en cherchant à les comprendre.

Prends le temps de manipuler chaque notion. N'hésite pas à modifier les programmes, à essayer d'autres solutions et à créer tes propres exercices.

Le but n'est pas de terminer rapidement, mais de construire des bases solides en programmation.

## Ressources

- **Ebook :** Apprendre le C pour débutant.
- **Code source :** Les exemples, exercices et projets de ce repository.
- **GitHub :** Ce dépôt est destiné à évoluer avec l'ajout de nouveaux programmes et de nouveaux exercices.

## Contribution

Les suggestions, corrections et améliorations sont les bienvenues.

Si tu repères une erreur, si tu souhaites proposer une amélioration ou si tu as une idée de projet supplémentaire, tu peux ouvrir une *Issue* ou proposer une *Pull Request*.

L'objectif est de construire progressivement une ressource utile aux personnes qui apprennent le langage C.

## Auteur

**Momo — momo_nanami**

Passionné d'informatique, de programmation et de transmission du savoir.

Je partage ici des ressources et des projets pour aider les débutants à apprendre la programmation de manière progressive et pratique.

---

**Ndank-ndank, on y va pas à pas.**

