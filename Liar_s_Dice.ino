

//Liars Dice
// A Quick and Easy-ish Liars Dice game based off of my code for Kingmaker. 
//Colors are used instead of pip numbers. I suggest Red being equal to 1, and Magenta being equal to 6. Employ a Roy G Biv style mnemonic if needed. 
// https://en.wikipedia.org/wiki/Liar%27s_dice

byte currentColor = 0;
byte GemColorRandomizer1 = 0;
byte GemColorRandomizer2 = 0;
byte GemColorRandomizer3 = 0;
byte GemColorRandomizer4 = 0;
byte GemColorRandomizer5 = 0;
int  DiceOnHand = 0;

//Declaring Variables Fairly certain this can get cleaned up with better code. 


Color GemColorList[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, MAGENTA}; 
//The "numbers" on the dice. Selected these because they were predefined. A better curation here may help.

void setup() {
  randomize();
  GemColorRandomizer1 =  random(5);
  GemColorRandomizer2 =  random(5);
  GemColorRandomizer3 =  random(5);
  GemColorRandomizer4 =  random(5);
  GemColorRandomizer5 =  random(5);
}

void loop() {

  if (buttonSingleClicked()) {
  setColorOnFace(OFF, 1);
  setColorOnFace(OFF, 2);
  setColorOnFace(OFF, 3);
  setColorOnFace(OFF, 4);
  setColorOnFace(OFF, 5);
  }

  // A Single Click to "hide" the dice under your cup, in case real life calls you away from the game. Long Press to return to your current "hand" of dice. 

 if (buttonLongPressed()) {
  
  if (DiceOnHand == 0) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer3[GemColorList], 3);
  setColorOnFace(GemColorRandomizer4[GemColorList], 4);
  setColorOnFace(GemColorRandomizer5[GemColorList], 5);
  }

  if (DiceOnHand == 1) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer3[GemColorList], 3);
  setColorOnFace(GemColorRandomizer4[GemColorList], 4);
  setColorOnFace(dim (WHITE, 50), 5);
  }

if (DiceOnHand == 2) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer3[GemColorList], 3);
  setColorOnFace(dim (WHITE, 50), 4);
  setColorOnFace(dim (WHITE, 50), 5);
  }

  if (DiceOnHand == 3) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(dim (WHITE, 50), 3);
  setColorOnFace(dim (WHITE, 50), 4);
  setColorOnFace(dim (WHITE, 50), 5);
  }

  if (DiceOnHand == 4) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(dim (WHITE, 50), 2);
  setColorOnFace(dim (WHITE, 50), 3);
  setColorOnFace(dim (WHITE, 50), 4);
  setColorOnFace(dim (WHITE, 50), 5);
  }

  if (DiceOnHand == 5) {
  setColorOnFace (dim (CYAN, 255), 0); // Adding Cyan at 0 to "spoil" the dice roll, and remind player to re-roll all five dice, as they no longer have any dice on hand.
  setColorOnFace(dim (WHITE, 50), 1);
  setColorOnFace(dim (WHITE, 50), 2);
  setColorOnFace(dim (WHITE, 50), 3);
  setColorOnFace(dim (WHITE, 50), 4);
  setColorOnFace(dim (WHITE, 50), 5);
    DiceOnHand = 0;
  }

  //Lengthy Math to roll only the number of dice that you currently still have in play. Another instance where I am certain that this can be expedited with better code. 
  
 }

if (buttonDoubleClicked())
{
  DiceOnHand = (DiceOnHand + 1) % 6;
}

if (buttonMultiClicked())
{
  setColor(OFF);
  GemColorRandomizer1 =  random(5);
  GemColorRandomizer2 =  random(5);
  GemColorRandomizer3 =  random(5);
  GemColorRandomizer4 =  random(5);
  GemColorRandomizer5 =  random(5);
}
// A Triple click re-rolls your dice.
}
