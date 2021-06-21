void setup() {
  // put your setup code here, to run once:

}

void loop() {

if (buttonSingleClicked())
{
  setColor(WHITE);
  setValueSentOnAllFaces(19);
}

if (buttonDoubleClicked())
{
  setColor(OFF);
}

}
