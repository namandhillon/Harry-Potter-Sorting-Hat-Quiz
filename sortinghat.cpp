/* 
Name: Namanpreet Dhillon
Project: Harry Potter Sorting Hat Quiz 
*/

#include <iostream>

int main(){

  // The magic starts here 

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;

  std::cout << "======================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "======================\n\n";

  std::cout <<"Q1) When I'm dead, I want people to remember me as:\n";

  std::cout << "   1) The Good\n";
  std::cout << "   2) The Great\n";
  std::cout << "   3) The Wise\n";
  std::cout << "   4) The Bold\n\n";

  std::cout << "Answer: ";
  std::cin >> answer1;
  std::cout << "\n";

  if (answer1 == 1) {
    hufflepuff++;
  }
    else if (answer1 == 2) {
      slytherin++;
    } 
    else if (answer1 == 3) {
      ravenclaw++;
    } 
    else if (answer1 == 4) {
      gryffindor++;
    } 
    else {
      std::cout << "Invalid Input.\n";
    }

  std::cout <<"Q2) Dawn or Dusk?: \n";

  std::cout << "   1) Dawn\n";
  std::cout << "   2) Dusk\n\n";

  std::cout << "Answer: ";
  std::cin >> answer2;
  std::cout << "\n";

  if (answer2 == 1) {
    gryffindor++ and ravenclaw++;
  }
    else if (answer2 == 2) {
     hufflepuff++ and slytherin++;
    }
    else {
      std::cout << "Invalid Input.\n";
    }

  std::cout <<"Q3) What kind of instrument most pleases your ear?: \n";

  std::cout << "   1) The Violin\n";
  std::cout << "   2) The Trumpet\n";
  std::cout << "   3) The Piano\n";
  std::cout << "   4) The Drum\n\n";

  std::cout << "Answer: ";
  std::cin >> answer3;
  std::cout << "\n";

  if (answer3 == 1) {
    slytherin++;
  }
    else if (answer3 == 2) {
      hufflepuff++;
    } 
    else if (answer3 == 3) {
      ravenclaw++;
    } 
    else if (answer3 == 4) {
      gryffindor++;
    } 
    else {
      std::cout << "Invalid Input.\n";
    }

  std::cout <<"Q4) Which road tempts you the most?: \n";

  std::cout << "   1) The wide, sunny grassy lane\n";
  std::cout << "   2) The narrow, dark, lantern-lit alley\n";
  std::cout << "   3) The twisting, leaf-strewn path through woods\n";
  std::cout << "   4) The cobbled street lined (ancient buildings)\n\n";

  std::cout << "Answer: ";
  std::cin >> answer4;
  std::cout << "\n";

    if (answer4 == 1) {
    hufflepuff++;
  }
    else if (answer4 == 2) {
      slytherin++;
    } 
    else if (answer4 == 3) {
      gryffindor++;
    } 
    else if (answer4 == 4) {
      ravenclaw++;
    } 
    else {
      std::cout << "Invalid Input.\n\n";
    }

  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

    if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

    if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << "The Sorting Hat has chosen. " << house << "!\n";

return 0;

}
