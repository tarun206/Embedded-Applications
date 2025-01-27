void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}


void dot()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13, LOW);
}

void dash ()
{
  digitalWrite(13,HIGH);
  delay(3000);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  String message = "SOS"; //Input message

  for (int i = 0; i < message.length(); i++)
  {
    if (message[i] == 'A' || message[i] == 'a')
    {
        dot();
        dash();
    }
    else if (message[i] == 'B' || message[i] == 'b')
    {
      dash();
      dot();
      dot();
      dot();
    }
    else if (message[i] == 'C' || message[i] == 'c')
    {
      dash();
      dot();
      dash();
      dot();
    }
    else if (message[i] == 'D' || message[i] == 'd')
    {
      dash();
      dot();
      dot();
    }
    else if (message[i] == 'E' || message[i] == 'e')
    {
      dot();
    }
    else if (message[i] == 'F' || message[i] == 'f')
    {
      dot();
      dot();
      dash();
      dot();
    }
    else if (message[i] == 'G' || message[i] == 'g')
    {
      dash();
      dash();
      dot();
    }
    else if (message[i] == 'H' || message[i] == 'h')
    {
      dot();
      dot();
      dot();
      dot();
    }
    else if (message[i] == 'I' || message[i] == 'i')
    {
      dot();
      dot();
    }
    else if (message[i] == 'J' || message[i] == 'j')
    {
      dot();
      dash();
      dash();
      dash();
    }
    else if (message[i] == 'K' || message[i] == 'k')
    {
      dash();
      dot();
      dash();
    }
    else if (message[i] == 'L' || message[i] == 'l')
    {
      dot();
      dash();
      dot();
      dot();
    }
    else if (message[i] == 'M' || message[i] == 'm')
    {
      dash();
      dash();
    }
    else if (message[i] == 'N' || message[i] == 'n')
    {
      dash();
      dot();
    }
    else if (message[i] == 'O' || message[i] == 'o')
    {
      dash();
      dash();
      dash();
    }
    else if (message[i] == 'P' || message[i] == 'p')
    {
      dot();
      dash();
      dash();
      dot();
    }
    else if (message[i] == 'Q' || message[i] == 'q')
    {
      dash();
      dash();
      dot();
      dash();
    }
    else if (message[i] == 'R' || message[i] == 'r')
    {
      dot();
      dash();
      dot();
    }
    else if (message[i] == 'S' || message[i] == 's')
    {
      dot();
      dot();
      dot();
    }
    else if (message[i] == 'T' || message[i] == 't')
    {
      dash();
    }
    else if (message[i] == 'U' || message[i] == 'u')
    {
      dot();
      dot();
      dash();
    }
    else if (message[i] == 'V' || message[i] == 'v')
    {
      dot();
      dot();
      dot();
      dash();
    }
    else if (message[i] == 'W' || message[i] == 'w')
    {
      dot();
      dash();
      dash();
    }
    else if (message[i] == 'X' || message[i] == 'x')
    {
      dash();
      dot();
      dot();
      dash();
    }
    else if (message[i] == 'Y' || message[i] == 'y')
    {
      dash();
      dot();
      dash();
      dash();
    }
    else if (message[i] == 'Z' || message[i] == 'z')
    {
      dash();
      dash();
      dot();
      dot();
    }
    else if (message[i] == '1')
    {
      dot();
      dash();
      dash();
      dash();
      dash();
    }
    else if (message[i] == '2')
    {
      dot();
      dot();
      dash();
      dash();
      dash();
    }
    else if (message[i] == '3')
    {
      dot();
      dot();
      dot();
      dash();
      dash();
    }
    else if (message[i] == '4')
    {
      dot();
      dot();
      dot();
      dot();
      dash();
    }
    else if (message[i] == '5')
    {
      dot();
      dot();
      dot();
      dot();
      dot();
    }
    else if (message[i] == '6')
    {
      dash();
      dot();
      dot();
      dot();
      dot();
    }
    else if (message[i] == '7')
    {
      dash();
      dash();
      dot();
      dot();
      dot();
    }
    else if (message[i] == '8')
    {
      dash();
      dash();
      dash();
      dot();
      dot();
    }
    else if (message[i] == '9')
    {
      dash();
      dash();
      dash();
      dash();
      dot();
    }
    else if (message[i] == '0')
    {
      dash();
      dash();
      dash();
      dash();
      dash();
    }
    else if (message[i] == ' ')
    {
      dash();
    }
  }
}