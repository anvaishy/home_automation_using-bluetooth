
char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(13, HIGH);  
    } if(inputString == "b"){   //incase of 'b' turn the LED off
      digitalWrite(13, LOW);
    }
     if(inputString == "c"){         //in case of 'c' turn the LED on
      digitalWrite(12, HIGH);  
    } if(inputString == "d"){   //incase of 'd' turn the LED off
      digitalWrite(12, LOW);
    }
     if(inputString == "e"){         //in case of 'e' turn the LED on
      digitalWrite(11, HIGH);  
    } if(inputString == "f"){   //incase of 'f' turn the LED off
      digitalWrite(11, LOW);
    }
     if(inputString == "g"){         //in case of 'g' turn the LED on
      digitalWrite(10, HIGH);  
    } if(inputString == "h"){   //incase of 'h' turn the LED off
      digitalWrite(10, LOW);
    }
    inputString = "";
  }
}
