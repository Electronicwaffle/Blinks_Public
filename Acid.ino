void setup() {
  // put your setup code here, to run once:
  setColor(BLUE);

}

void loop() {
  // put your main code here, to run repeatedly:
  
if (getLastValueReceivedOnFace(0) == 19)
{
  setColor (RED);
}

if (buttonDoubleClicked())
{
  setColor(OFF);
}

}
