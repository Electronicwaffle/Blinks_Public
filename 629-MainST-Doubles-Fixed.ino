
// Main Street "Prime" build 062921

byte BuildingColor = 0;
byte CarColor = 0;
byte ClickTell = 0;
Color CarColorList[4] = {CYAN, WHITE, ORANGE, MAGENTA};
Color BuildingColorList[4] = {GREEN, RED, YELLOW, BLUE};

void setup() {
  
  setColor(OFF);

}

void loop() {

  if (buttonLongPressed()){
    setColorOnFace(dim (CarColorList[CarColor], 100), 2);
    setColorOnFace(OFF, 5);
    CarColor = (CarColor + 1) % 4; 
  }

  if (buttonDoubleClicked()){
    setColorOnFace(BuildingColorList[BuildingColor], 0);
    setColorOnFace(BuildingColorList[BuildingColor], 1);
    setColorOnFace(BuildingColorList[BuildingColor], 3);
    setColorOnFace(BuildingColorList[BuildingColor], 4);
    BuildingColor = (BuildingColor + 1) % 4;
    setValueSentOnAllFaces(++ClickTell);
  }

  if (buttonMultiClicked()){
        setColorOnFace(GREEN, 0);
        setColorOnFace(RED, 1);
        setColorOnFace(YELLOW, 3);
        setColorOnFace(BLUE, 4);
}

  if (buttonSingleClicked())
  {

    if (getLastValueReceivedOnFace(0) == 1 && isValueReceivedOnFaceExpired(1) && isValueReceivedOnFaceExpired(3) && isValueReceivedOnFaceExpired(4))
    {
        setColorOnFace (OFF, 0);
    }

    if (getLastValueReceivedOnFace(1) == 2 && isValueReceivedOnFaceExpired(0) && isValueReceivedOnFaceExpired(3) && isValueReceivedOnFaceExpired(4))
    {
       setColorOnFace (OFF, 1);
    }

    if (getLastValueReceivedOnFace(3) == 3 && isValueReceivedOnFaceExpired(1) && isValueReceivedOnFaceExpired(0) && isValueReceivedOnFaceExpired(4))
    {
       setColorOnFace (OFF, 3);
    }

   if (getLastValueReceivedOnFace(4) == 4 && isValueReceivedOnFaceExpired(1) && isValueReceivedOnFaceExpired(3) && isValueReceivedOnFaceExpired(0))
   {
      setColorOnFace (OFF, 4);
    }

   if (getLastValueReceivedOnFace(0) == 1 && getLastValueReceivedOnFace(1) == 2 && isValueReceivedOnFaceExpired(3) && isValueReceivedOnFaceExpired(4))
    {
        setColorOnFace (OFF, 0);
        setColorOnFace (OFF, 1);
    }

    
   if (getLastValueReceivedOnFace(3) == 3 && getLastValueReceivedOnFace(4) == 4 && isValueReceivedOnFaceExpired(0) && isValueReceivedOnFaceExpired(1))
    {
        setColorOnFace (OFF, 3);
        setColorOnFace (OFF, 4);
    }

  
   if (getLastValueReceivedOnFace(0) == 1 && getLastValueReceivedOnFace(1) == 2 && isValueReceivedOnFaceExpired(3) && isValueReceivedOnFaceExpired(4))
    {
        setColorOnFace (OFF, 0);
        setColorOnFace (OFF, 1);
    }

}

}
