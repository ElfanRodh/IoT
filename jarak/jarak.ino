const int trigPin = 7; // pin to send sound
const int echoPin = 8; // pin to receive sound
const int jmlLoop = 5;

float duration, // durasi perjalanan pulang pergi
      distance; // jarak dalam cm

void setup() { 
  pinMode(trigPin, OUTPUT); // siapkan port
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); // siapkan console
} 

void loop() 
{ // loop()
  
int i=0;
duration = 0;

while (i++ < jmlLoop)
{ // while
//   penghitungan diulang sebanyak jmlLooop
//   lalu diambil rata2 untuk mendapatkan akurasi yg baik
   
   digitalWrite(trigPin, LOW); //matikan dulu untuk memastikan bersih
   delayMicroseconds(2); // delay dulu
   digitalWrite(trigPin, HIGH); //menghidupkan, mengirim sinyal
   delayMicroseconds(10); //delay dulu setelah suara terkirim
   digitalWrite(trigPin, LOW); // matikan lagi agar tidak ada suara yang dikirim lagi
   duration += pulseIn(echoPin, HIGH) - 12; //menerima hasil suara yg dipantulkan (12 standart device)
   delay (200);
} // while

 duration = duration / jmlLoop;
 distance = (duration*.0343)/2; // .0343 adalah kecepatan suara cm  per mili detik (2 karena dihitung berangkat&kembalinya suara)
 Serial.print("Jarak : "); 
 Serial.print(distance); // dalam centi meter
 Serial.println ("  cm");
 
 delay(500); 
} // loop()
