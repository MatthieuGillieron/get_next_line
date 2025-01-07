# GET_NEXT_LINE - Projet 42

Le projet **get_next_line** consiste à implémenter une fonction capable de lire une ligne à la fois à partir d’un descripteur de fichier. Ce projet vise à maîtriser la gestion des entrées/sorties, la manipulation de buffers et la gestion dynamique de la mémoire en langage C.

## Description

La fonction `get_next_line` doit lire une ligne entière depuis un descripteur de fichier donné, sans connaître au préalable la taille de la ligne. Elle doit gérer efficacement les lectures en buffer et permettre la lecture alternée de plusieurs descripteurs de fichiers.

## Fonctionnalités

- **Lecture ligne par ligne** : Lire une ligne complète jusqu’au caractère de nouvelle ligne (`\n`) ou jusqu’à la fin du fichier.
- **Gestion de plusieurs descripteurs** : Permettre la lecture simultanée de plusieurs fichiers sans interférence entre eux.
- **Bufferisation efficace** : Utiliser une taille de buffer optimisée pour minimiser les appels système et améliorer les performances.
- **Gestion dynamique de la mémoire** : Allouer et libérer la mémoire de manière appropriée pour éviter les fuites mémoire et assurer la stabilité du programme.
- **Compatibilité** : Fonctionner correctement avec différents types de fichiers et de descripteurs, y compris les entrées standard (`stdin`).

## Objectifs

- **Maîtriser les opérations d'entrée/sortie** en langage C, notamment la lecture à partir de descripteurs de fichiers.
- **Développer des compétences en gestion de buffers** et en manipulation de chaînes de caractères dynamiques.
- **Améliorer la gestion de la mémoire** en utilisant des allocations dynamiques efficaces et en évitant les fuites mémoire.
- **Optimiser le code** pour assurer des performances élevées, même avec de grandes quantités de données ou de multiples descripteurs de fichiers.

