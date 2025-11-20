# 🟦 **README — Application de Figures Géométriques en C++ / SFML**
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## 📌 Présentation

Ce projet est une application développée en C++ utilisant SFML pour afficher et manipuler des figures géométriques simples : cercle, triangle, rectangle et carré.
Il illustre une architecture orientée objet claire reposant sur l’héritage, le polymorphisme et la réutilisabilité du code.

L’utilisateur peut visualiser l’ensemble des figures et consulter leurs aires et périmètres directement dans la fenêtre graphique.

---

## 🏗️ **Architecture du projet**

L’application repose sur une hiérarchie de classes organisée autour de deux abstractions principales :

### **1. `Figure` (classe abstraite)**

Définit l’interface commune à toutes les formes :

* calcul de l’aire
* calcul du périmètre
* affichage graphique

### **2. `Polygone` (classe abstraite)**

Spécialise `Figure` pour les formes définies par un ensemble de sommets.
Contient la gestion et le dessin générique des polygones.

### **3. Classes concrètes**

* **Cercle** (hérite directement de `Figure`)
* **Triangle** (hérite de `Polygone`)
* **Rectangle** (hérite de `Polygone`)
* **Carre** (hérite de `Polygone`)

Chaque classe implémente ses propres formules d’aire et de périmètre.

### **4. `App` (dans Ihm/)**

Classe centrale qui :

* initialise la fenêtre SFML
* instancie les figures
* gère la boucle d’événements
* dessine les figures
* affiche leurs informations (aire & périmètre)

---

## 📂 **Organisation du projet**

```
.
├── Components/
│   ├── Figure.h
│   ├── Polygone.h / .cpp
│   ├── Cercle.h / .cpp
│   ├── Triangle.h / .cpp
│   ├── Rectangle.h / .cpp
│   ├── Carre.h / .cpp
│
├── Ihm/
│   ├── App.h
│   ├── App.cpp
│   ├── arial.ttf
│
├── Service/     (future extension)
│
├── main.cpp
├── Makefile
└── README.md
```

---

## 🎨 **Fonctionnalités**

* Affichage graphique de plusieurs figures géométriques.
* Calcul automatique de l’aire et du périmètre.
* Affichage textuel en haut à gauche des informations suivantes :

  ```
  Cercle    : A = ... | P = ...
  Triangle  : A = ... | P = ...
  Rectangle : A = ... | P = ...
  Carre     : A = ... | P = ...
  ```
* Architecture évolutive permettant d’ajouter facilement de nouvelles formes.

---

## ⚙️ **Installation et compilation**

### **1. Prérequis**

Installer SFML (version ≥ 2.5) :

**Sur Linux (Debian/Ubuntu) :**

```bash
sudo apt install libsfml-dev
```

### **2. Compilation**

Depuis la racine du projet :

```bash
make
```

### **3. Exécution**

```bash
./app
```

---

## 📐 **Concepts POO appliqués**

### **Héritage**

Les formes partagent un comportement commun défini dans `Figure`, évitant la duplication de code.

### **Classes abstraites**

`Figure` et `Polygone` imposent un contrat clair et garantissent une structure cohérente aux classes dérivées.

### **Polymorphisme**

`App` manipule des `Figure*` sans connaître le type concret des formes.

### **Réutilisabilité**

Le code commun (gestion des sommets, dessin, interface commune) est centralisé dans les super-classes.

### **Architecture scalable**

Ajouter une nouvelle forme nécessite uniquement de dériver `Figure` ou `Polygone` et d’implémenter les méthodes essentielles.

---

## 📈 **Évolutions possibles**

* Ajout d’une classe `Point` pour découpler la logique géométrique de SFML.
* Interaction utilisateur (déplacement, création, suppression de formes).
* Interface graphique plus avancée (panneau latéral, sélection, outils).
* Export / import de scènes.

---

## 📝 **Auteur**

Projet réalisé dans le cadre de l’étude de la POO en C++ et des interfaces graphiques SFML.

---

Si tu veux, je peux aussi te générer :
✔ un badge GitHub
✔ une image d’illustration à mettre dans le README
✔ une version anglaise du README.
