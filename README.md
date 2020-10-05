# BSQ
Résumé: Trouveras-tu le plus grand carré ?

Sujet
• Le plus grand carré :
◦ Il s’agit de trouver le plus grand carré possible sur un plateau en évitant des
obstacles.
◦ Un plateau vous est transmis dans un fichier passé en argument du programme.
◦ La première ligne du plateau contient les informations pour lire la carte :
– Le nombre de lignes du plateau ;
– Le caractère "vide" ;
– Le caractère "obstacle" ;
– Le caractère "plein".
◦ Le plateau est composé de lignes de ’caractère "vide"’ et de ’caractère
"obstacle"’.
◦ Le but du programme est de remplacer les ’caractère "vide"’ par des ’caractère
"plein"’ pour représenter le plus grand carré possible.
◦ Dans le cas où il y en a plusieurs solutions, on choisira de représenter le carré le
plus en haut à gauche.


• Carte valide :
◦ Toutes les lignes doivent avoir la même longueur.
◦ Il y a au moins une ligne d’au moins une case.
◦ À la fin de chaque ligne il y a un retour à la ligne.
◦ Les caractères présent dans la carte doivent être uniquement ceux présenté à la
première ligne.
◦ En cas de carte invalide vous afficherez sur la sortie d’erreur : map error suivi
d’un retour à la ligne puis il passera traitement du plateau suivant.
• Exemple de fonctionnement :
%>cat example_file
9.ox
...........................
....o......................
............o..............
...........................
....o......................
...............o...........
...........................
......o..............o.....
..o.......o................
%>./bsq example_file
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxxo..............
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxx...o...........
.....xxxxxxx...............
......o..............o.....
..o.......o................
%>
C’est bien un carré. Même si cela n’y ressemble pas visuellement
5
Chapitre III
Consignes
• L’exécutable doit s’appeller bsq et se trouver dans le répertoire principal.
• Votre projet doit être à la Norme.
• Vous ne pouvez utiliser que les éléments vus durant votre Piscine.
• Le répertoire doit avoir un fichier auteur dans lequel vous devez mettre vos logins.
$>cat auteur
login_1:login_2
$>
• Le programme peut prendre de 1 à N fichiers en paramètre.
• Si aucun argument il lira sur l’entrée standard.
• Votre Makefile devra compiler le projet.
• Vous ne pouvez utiliser que les fonctions exit, open, close, write, read, malloc
et free.
• Vous pouvez poser vos questions dans le forum.


