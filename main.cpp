#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>
#include <cstdlib>
#include <algorithm>

class Joueur {
private:

    std::vector<int> coeurs_joueur1;
    std::vector<int> coeurs_joueur2;

    std::vector<int> piques_joueur1;
    std::vector<int> piques_joueur2;

    std::vector<int> dames_joueur1;
    std::vector<int> dames_joueur2;

    std::vector<int> trefles_joueur1;
    std::vector<int> trefles_joueur2;

	int points_joueur1 = 0;
    int points_joueur2 = 0;

public:


    void ajouterCarte() {

        // COEUR
        for (int i = 1; i <= 13; i++) {
            

            int num = std::rand() % 2 + 1;

            if (num == 1) {
                coeurs_joueur1.push_back(i);
            }
            else {
                coeurs_joueur2.push_back(i);
            }
        }

        // PIQUES

        for (int i = 1; i <= 13; i++) {
            

            int num = std::rand() % 2 + 1;

            if (num == 1) {
                piques_joueur1.push_back(i);
            }
            else {
                piques_joueur2.push_back(i);
            }
        }

        // DAMES

        for (int i = 1; i <= 13; i++) {
            

            int num = std::rand() % 2 + 1;

            if (num == 1) {
                dames_joueur1.push_back(i);
            }
            else {
                dames_joueur2.push_back(i);
            }
        }

        // TREFLES

        for (int i = 1; i <= 13; i++) {
            

            int num = std::rand() % 2 + 1;

            if (num == 1) {
                trefles_joueur1.push_back(i);
            }
            else {
                trefles_joueur2.push_back(i);
            }
        }
        

    }

    void afficherCartes() {


        // CARTES JOUEUR 1
        std::cout << "Le joueur 1 dispose des cartes suivantes : " << std::endl;

        std::cout << "Coeurs joueur 1 : ";
        for (int i = 0; i < coeurs_joueur1.size(); ++i) {
            std::cout << coeurs_joueur1[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Piques joueur 1 : ";
        for (int i = 0; i < piques_joueur1.size(); ++i) {
            std::cout << piques_joueur1[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Dames joueur 1 : ";
        for (int i = 0; i < dames_joueur1.size(); ++i) {
            std::cout << dames_joueur1[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Trefles joueur 1 : ";
        for (int i = 0; i < trefles_joueur1.size(); ++i) {
            std::cout << trefles_joueur1[i] << " ";
        }
        std::cout << std::endl;

        // CARTES JOUEUR 2
        std::cout << "Le joueur 2 dispose des cartes suivantes : " << std::endl;

        std::cout << "Coeurs joueur 2 : ";
        for (int i = 0; i < coeurs_joueur2.size(); ++i) {
            std::cout << coeurs_joueur2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Piques joueur 2 : ";
        for (int i = 0; i < piques_joueur2.size(); ++i) {
            std::cout << piques_joueur2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Dames joueur 2 : ";
        for (int i = 0; i < dames_joueur2.size(); ++i) {
            std::cout << dames_joueur2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Trefles joueur 2 : ";
        for (int i = 0; i < trefles_joueur2.size(); ++i) {
            std::cout << trefles_joueur2[i] << " ";
        }
        std::cout << std::endl;

   
    }


    int getMeilleureCarte() {
        int meilleureCarte = 0;

        int num = std::rand() % 4 + 1;


        // COEUR
        if (num == 1) {
            int cartej1 = 0;
            int cartej2 = 0;

            if (!coeurs_joueur1.empty()) {
                int indexCarte1 = std::rand() % coeurs_joueur1.size();
                cartej1 = coeurs_joueur1[indexCarte1];
                coeurs_joueur1.erase(coeurs_joueur1.begin() + indexCarte1);
                std::cout << "Le joueur 1 joue la carte Coeur numero : " << cartej1 << std::endl;
            }

            // Choix aléatoire d'une carte pour le joueur 2
            if (!coeurs_joueur2.empty()) {
                int indexCarte2 = std::rand() % coeurs_joueur2.size();
                cartej2 = coeurs_joueur2[indexCarte2];
                coeurs_joueur2.erase(coeurs_joueur2.begin() + indexCarte2);
                std::cout << "Le joueur 2 joue la carte Coeur numero : " << cartej2 << std::endl;
                // Comparaison des cartes et attribution des points
                if (cartej1 > cartej2) {
                    std::cout << "Le joueur 1 remporte la manche + 1 points." << std::endl;
                    points_joueur1 += 1;
                } else {
                    std::cout << "Le joueur 2 remporte la manche + 1 points." << std::endl;
                    points_joueur2 += 1;
                }
            }
        }

        // PIQUES
        if (num == 2) {
            int cartej1 = 0;
            int cartej2 = 0;

            if (!piques_joueur1.empty()) {
                int indexCarte1 = std::rand() % piques_joueur1.size();
                cartej1 = piques_joueur1[indexCarte1];
                piques_joueur1.erase(piques_joueur1.begin() + indexCarte1);
                std::cout << "Le joueur 1 joue la carte Piques numero : " << cartej1 << std::endl;
            }

            // Choix aléatoire d'une carte pour le joueur 2
            if (!piques_joueur2.empty()) {
                int indexCarte2 = std::rand() % piques_joueur2.size();
                cartej2 = piques_joueur2[indexCarte2];
                piques_joueur2.erase(piques_joueur2.begin() + indexCarte2);
                std::cout << "Le joueur 2 joue la carte Piques numero : " << cartej2 << std::endl;
                // Comparaison des cartes et attribution des points
                if (cartej1 > cartej2) {
                    std::cout << "Le joueur 1 remporte la manche + 1 points." << std::endl;
                    points_joueur1 += 1;
                } else {
                    std::cout << "Le joueur 2 remporte la manche + 1 points." << std::endl;
                    points_joueur2 += 1;
                }
            }
        }

        // DAMES
        if (num == 3) {
            int cartej1 = 0;
            int cartej2 = 0;

            if (!dames_joueur1.empty()) {
                int indexCarte1 = std::rand() % dames_joueur1.size();
                cartej1 = dames_joueur1[indexCarte1];
                dames_joueur1.erase(dames_joueur1.begin() + indexCarte1);
                std::cout << "Le joueur 1 joue la carte Dames numero : " << cartej1 << std::endl;
            }

            // Choix aléatoire d'une carte pour le joueur 2
            if (!dames_joueur2.empty()) {
                int indexCarte2 = std::rand() % dames_joueur2.size();
                cartej2 = dames_joueur2[indexCarte2];
                dames_joueur2.erase(dames_joueur2.begin() + indexCarte2);
                std::cout << "Le joueur 2 joue la carte Dames numero : " << cartej2 << std::endl;
                // Comparaison des cartes et attribution des points
                if (cartej1 > cartej2) {
                    std::cout << "Le joueur 1 remporte la manche + 1 points." << std::endl;
                    points_joueur1 += 1;
                } else {
                    std::cout << "Le joueur 2 remporte la manche + 1 points." << std::endl;
                    points_joueur2 += 1;
                }
            }
        }

        // TREFLES
        if (num == 4) {
            int cartej1 = 0;
            int cartej2 = 0;

            if (!trefles_joueur1.empty()) {
                int indexCarte1 = std::rand() % trefles_joueur1.size();
                cartej1 = trefles_joueur1[indexCarte1];
                trefles_joueur1.erase(trefles_joueur1.begin() + indexCarte1);
                std::cout << "Le joueur 1 joue la carte Trefles numero : " << cartej1 << std::endl;
            }

            // Choix aléatoire d'une carte pour le joueur 2
            if (!trefles_joueur2.empty()) {
                int indexCarte2 = std::rand() % trefles_joueur2.size();
                cartej2 = trefles_joueur2[indexCarte2];
                trefles_joueur2.erase(trefles_joueur2.begin() + indexCarte2);
                std::cout << "Le joueur 2 joue la carte Trefles numero : " << cartej2 << std::endl;
                // Comparaison des cartes et attribution des points
                if (cartej1 > cartej2) {
                    std::cout << "Le joueur 1 remporte la manche + 1 points." << std::endl;
                    points_joueur1 += 1;
                } else {
                    std::cout << "Le joueur 2 remporte la manche + 1 points." << std::endl;
                    points_joueur2 += 1;
                }
            }
        }

        return meilleureCarte;
    }

    void afficherPoints() {
        if(points_joueur1 > points_joueur2) {
            std::cout << "Le joueur 1 gagne la partie avec :" << points_joueur1 << " Points !" << std::endl;
        }
        else
        {
            std::cout << "Le joueur 2 gagne la partie avec :" << points_joueur2 << " Points !" << std::endl;
        }
        
    }
};

class Jeu {
private:
    Joueur joueur1;
    Joueur joueur2;

public:
    void jouerTour() {


    }

};

int main() {
    Jeu jeu;
    Joueur joueur;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::srand(std::time(0)); // Initialiser le générateur de nombres aléatoires

    

    joueur.ajouterCarte();
    for (int i = 0; i < 10; i++) {
        std::cout << "Tour " << i + 1 << std::endl;
        joueur.getMeilleureCarte();
        
    }

    joueur.afficherPoints();

    return 0;
}