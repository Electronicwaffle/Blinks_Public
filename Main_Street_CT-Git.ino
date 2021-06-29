
byte BuildingSend = 0;
byte BuildingColor = 0;
byte CarColor = 0;
byte ClickTell = 0;
Color CarColorList[4] = {CYAN, WHITE, ORANGE, MAGENTA};
Color BuildingColorList[4] = {GREEN, RED, YELLOW, BLUE};

byte GreenCrossed = 0;
byte RedCrossed = 0;
byte BlueCrossed = 0; 
byte YellowCrossed = 0; 

void setup() {
  // put your setup code here, to run once:
//Main Street Pre-Alpha Feel-Around 06/23/21
//4 blinks in one row, connected. One blink for die. 4 blinks as cars. Each car has to go down "Main Street" to run errands on this very busy Saturday. 
//Green Grocers, A Doctor's Appointment, The Post Office, and The Library. Roll Die. ROTATE blink over the top of Main Street, and over other cars (Traffic Jam) 
// in effort to have your blink's face with the corresponding color match the given location's face, at the time they are there. First to unload all faces wins. 
// Both directions of travel allowed, but turn is skipped if another blink is over-taking you. 

  //setColorOnFace(dim (WHITE, 50), 2);
  //setColorOnFace(dim (WHITE, 50), 5); 
  //White to set up the double stripe lined road.
  //Green Grocers, Doctor/Red, Post Office/Blue, Library / Yellow

  setColor(OFF);

}

void loop() {
// ID Paint Color for "The Car"
  if (buttonLongPressed()){
    setColorOnFace(CarColorList[CarColor], 2);
    setColorOnFace(OFF, 5);
    CarColor = (CarColor + 1) % 4;
    
  }
//Swap " List " between first and second "Building Color"
//Building Colors / Attractions 
  if (buttonDoubleClicked()){
    setColorOnFace(BuildingColorList[BuildingColor], 0);
    setColorOnFace(BuildingColorList[BuildingColor], 1);
    setColorOnFace(BuildingColorList[BuildingColor], 3);
    setColorOnFace(BuildingColorList[BuildingColor], 4);
    BuildingSend = (BuildingSend + 1) % 4;
    BuildingColor = (BuildingColor + 1) % 4;
    setValueSentOnAllFaces(++ClickTell);
  }
  // The "Car"
  
  if (buttonMultiClicked()){
    
    if (GreenCrossed == 0);
      {
        setColorOnFace(GREEN, 0);
      }
      
    
    if (RedCrossed == 0);
      {
        setColorOnFace(RED, 1);
      }

    if (YellowCrossed == 0);
      {
        setColorOnFace(YELLOW, 3);
      }

    if (BlueCrossed == 0);
      {
        setColorOnFace(BLUE, 4);
      }
      
}

//The Logistics


  if (buttonSingleClicked())
  {
    if (getLastValueReceivedOnFace(0) == 1)
    {
        setColorOnFace (OFF, 0);
        GreenCrossed = 1;
    }

    if (getLastValueReceivedOnFace(1) == 2)
    {
       setColorOnFace (OFF, 1);
       RedCrossed = 1;
    }

    if (getLastValueReceivedOnFace(3) == 3)
    {
       setColorOnFace (OFF, 3);
       YellowCrossed = 1; 
    }

   if (getLastValueReceivedOnFace(4) == 4)
   {
      setColorOnFace (OFF, 4);
      BlueCrossed = 1;
    }


}

//if (ClickTell >= 5);
// {
//   ClickTell = 1;
//}


if (BuildingSend >= 5);
  {
    BuildingSend = 1;
  }

}