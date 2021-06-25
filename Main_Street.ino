
byte BuildingSend = 0;
byte BuildingColor = 0;
byte CarColor = 0;
Color CarColorList[4] = {CYAN, WHITE, ORANGE, MAGENTA};
Color BuildingColorList[4] = {GREEN, BLUE, RED, YELLOW};

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

  if (buttonSingleClicked()){
    setColorOnFace(CarColorList[CarColor], 2);
    setColorOnFace(CarColorList[CarColor], 5);
    CarColor = (CarColor + 1) % 4;
    
  }

  if (buttonDoubleClicked()){
    setColorOnFace(BuildingColor[BuildingColorList], 0);
    setColorOnFace(BuildingColor[BuildingColorList], 1);
    setColorOnFace(BuildingColor[BuildingColorList], 3);
    setColorOnFace(BuildingColor[BuildingColorList], 4);
    setValueSentOnAllFaces(BuildingSend);
    BuildingSend = (BuildingSend + 1) % 4;
    BuildingColor = (BuildingColor + 1) % 4;
  }
  
  if (buttonMultiClicked()){
    setColorOnFace(GREEN, 0);
    setColorOnFace(RED, 1);
    setColorOnFace(YELLOW, 3);
    setColorOnFace(BLUE, 4);
}

//The Logistics


  if (buttonLongPressed())
  {
    if (getLastValueReceivedOnFace(0) == 0)
    {
        setColorOnFace (OFF, 1);
    }

    if (getLastValueReceivedOnFace(1) == 1)
    {
       setColorOnFace (OFF, 0);
    }

    if (getLastValueReceivedOnFace(3) == 2)
    {
       setColorOnFace (OFF, 3);
    }

   if (getLastValueReceivedOnFace(4) == 3)
   {
      setColorOnFace (OFF, 4);
    }

//&& BuildingSend == 0
//&& BuildingSend == 1
//&& BuildingSend == 2
//&& BuildingSend == 3



}

}
