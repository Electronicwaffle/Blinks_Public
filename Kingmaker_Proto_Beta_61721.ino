
byte currentColor = 0;
byte GemColorRandomizer1 = 0;
byte GemColorRandomizer2 = 0;
byte GemColorRandomizer4 = 0;
byte GemColorRandomizer5 = 0;

Color GemColorList[4] = {RED, BLUE, YELLOW, GREEN};

void setup() {
  randomize();
  GemColorRandomizer1 =  random(3);
  GemColorRandomizer2 =  random(3);
  GemColorRandomizer4 =  random(3);
  GemColorRandomizer5 =  random(3);
}

void loop() {

  if (buttonSingleClicked()) {
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer4[GemColorList], 4);
  setColorOnFace(GemColorRandomizer5[GemColorList], 5);
  setColorOnFace(OFF, 1);
  setColorOnFace(OFF, 2);
  }

 if (buttonLongPressed()) {

  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer4[GemColorList], 4);
  setColorOnFace(GemColorRandomizer5[GemColorList], 5);

 }

if (buttonDoubleClicked())
{
  setColorOnFace(GemColorRandomizer1[GemColorList], 1);
  setColorOnFace(GemColorRandomizer2[GemColorList], 2);
  setColorOnFace(GemColorRandomizer4[GemColorList], 4);
  setColorOnFace(GemColorRandomizer5[GemColorList], 5);
  setColorOnFace(OFF, 4);
  setColorOnFace(OFF, 5);
}

if (buttonMultiClicked())
{
  setColor(OFF);
  GemColorRandomizer1 =  random(3);
  GemColorRandomizer2 =  random(3);
  GemColorRandomizer4 =  random(3);
  GemColorRandomizer5 =  random(3);
}

}
