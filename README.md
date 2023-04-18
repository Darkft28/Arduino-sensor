# Arduino-sensor

Ce programme en C++ utilise une bibliothèque appelée LiquidCrystal.h pour afficher du texte sur un écran LCD à 2 lignes et 16 colonnes.
Dans la fonction setup(), le programme initialise l'écran LCD et affiche le message "Projet STI2D" sur la première ligne et "Mur vegetal" sur la deuxième ligne, avant d'attendre 5 secondes grâce à la fonction delay(5000).
Dans la fonction loop(), le programme lit la valeur d'un capteur d'humidité branché sur l'entrée analogique A1 et affiche la valeur lue sur l'écran LCD, en la convertissant en pourcentage d'humidité. Cette opération est répétée 30 fois, avec un délai de 200 millisecondes entre chaque lecture.
Ensuite, le programme affiche une série d'informations sur l'écran LCD, telles que le nom de différentes plantes, la saison, la température de l'eau et la température extérieure, avec des délais de 2 secondes entre chaque affichage.
Enfin, le programme affiche de nouveau le message "Projet STI2D" sur la première ligne et "Mur vegetal" sur la deuxième ligne, avant d'attendre 2 secondes. Ce processus est répété en boucle indéfiniment grâce à la fonction loop().
