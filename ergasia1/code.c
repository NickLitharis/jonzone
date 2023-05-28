int cm_entry1 = 0;
int cm_entry2 = 0;
int cm_exit1 = 0;
int cm_exit2 = 0;

int PIN_RED1 = 11;
int PIN_BLUE1 = 13;
int PIN_GREEN1 = 12;

int PIN_RED2 = 8;
int PIN_BLUE2 = 10;
int PIN_GREEN2 = 9;

long readUltrasonicDistance(int triggerPin, int echoPin)
{

  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  
 
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  

  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_RED1,   OUTPUT);
  pinMode(PIN_GREEN1, OUTPUT);
  pinMode(PIN_BLUE1,  OUTPUT);
  pinMode(PIN_RED2,   OUTPUT);
  pinMode(PIN_GREEN2, OUTPUT);
  pinMode(PIN_BLUE2,  OUTPUT);
}

void loop()
{
  // measure the ping time in cm
  
 cm_entry1 = 0.01723 * readUltrasonicDistance(7, 7);
 cm_entry2 = 0.01723 * readUltrasonicDistance(6, 6);
 cm_exit1 = 0.01723 * readUltrasonicDistance(4, 4);
 cm_exit2 = 0.01723 * readUltrasonicDistance(5, 5);
    
  if(((cm_entry1 < 336) && (cm_entry2 < 336)) || ((cm_exit1 < 336) && (cm_exit2 < 336))){
    if((cm_entry1 < 336) && (cm_entry2 < 336) && (cm_exit1 < 336) && (cm_exit2 < 336) ){
      Serial.println(" MAYDAY MAYDAY ");
      
      analogWrite(PIN_GREEN2, 0);
      analogWrite(PIN_BLUE2, 0);
  	  analogWrite(PIN_RED2, 255);
      analogWrite(PIN_GREEN1, 0);
      analogWrite(PIN_BLUE1, 0);
  	  analogWrite(PIN_RED1, 255);
    }
    else if((cm_exit1 < 336) && (cm_exit2 < 336)){
      Serial.println(" TRAIN FROM RIGHT ");
      
      analogWrite(PIN_GREEN2, 255);
      analogWrite(PIN_BLUE2, 0);
  	  analogWrite(PIN_RED2, 0);
      analogWrite(PIN_GREEN1, 0);
      analogWrite(PIN_BLUE1, 0);
  	  analogWrite(PIN_RED1, 255);
    }
    else{
      Serial.println(" TRAIN FROM LEFT ");
      
      analogWrite(PIN_GREEN1, 255);
      analogWrite(PIN_BLUE1, 0);
  	  analogWrite(PIN_RED1, 0);
      analogWrite(PIN_GREEN2, 0);
      analogWrite(PIN_BLUE2, 0);
  	  analogWrite(PIN_RED2, 255);
    };
  }
  else if((cm_entry1 < 336) || (cm_entry2 < 336)|| (cm_exit1 < 336) || (cm_exit2 < 336) ){
    Serial.println(" OBSTACLE ON TRACKS ");
    analogWrite(PIN_GREEN1, 165);
    analogWrite(PIN_BLUE1, 0 );
  	analogWrite(PIN_RED1, 255);
    analogWrite(PIN_GREEN2, 165);
    analogWrite(PIN_BLUE2, 0 );
  	analogWrite(PIN_RED2, 255);
  }
  else{
    Serial.println(" TRACKS ARE CLEAR ");
    analogWrite(PIN_GREEN1, 255);
    analogWrite(PIN_BLUE1, 0);
  	analogWrite(PIN_RED1, 0);
    analogWrite(PIN_GREEN2, 255);
    analogWrite(PIN_BLUE2, 0);
  	analogWrite(PIN_RED2, 0);
    delay(50);
    analogWrite(PIN_GREEN1, 0);
    analogWrite(PIN_GREEN2, 0);
  };
	
  delay(50); // Wait for 100 millisecond(s)
}

//https://www.tinkercad.com/things/ha3IfjEQCaj-smooth-juttuli/editel?sharecode=84-91449BKzcFXtrMrcS-41TaZLL9z-900aS0qVfvgU