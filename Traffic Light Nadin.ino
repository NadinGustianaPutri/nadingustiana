// Pin untuk lampu lalu lintas jalur 1
int red1 = 2;
int yellow1 = 3;
int green1 = 4;

// Pin untuk lampu lalu lintas jalur 2
int red2 = 5;
int yellow2 = 6;
int green2 = 7;

// Pin untuk lampu lalu lintas jalur 3
int red3 = 8;
int yellow3 = 9;
int green3 = 10;

// Waktu delay (dalam milidetik)
int greenTime = 5000;   // Waktu lampu hijau menyala (5 detik)
int yellowTime = 2000;  // Waktu lampu kuning menyala (2 detik)
int redTime = 5000;     // Waktu lampu merah menyala (5 detik)

void setup() {
  // Atur semua pin sebagai output
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(red3, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green3, OUTPUT);
}

void loop() {
  // Siklus untuk jalur 1 hijau, jalur 2 & 3 merah
  digitalWrite(green1, HIGH);  // Hijau untuk jalur 1
  digitalWrite(red2, HIGH);    // Merah untuk jalur 2
  digitalWrite(red3, HIGH);    // Merah untuk jalur 3
  delay(greenTime);            // Tunggu selama lampu hijau menyala
  digitalWrite(green1, LOW);   // Matikan hijau jalur 1
  digitalWrite(yellow1, HIGH); // Nyalakan kuning jalur 1
  delay(yellowTime);           // Tunggu kuning
  digitalWrite(yellow1, LOW);  // Matikan kuning jalur 1
  digitalWrite(red1, HIGH);    // Nyalakan merah jalur 1

  // Siklus untuk jalur 2 hijau, jalur 1 & 3 merah
  digitalWrite(green2, HIGH);  // Hijau untuk jalur 2
  digitalWrite(red1, HIGH);    // Merah untuk jalur 1
  digitalWrite(red3, HIGH);    // Merah untuk jalur 3
  delay(greenTime);            // Tunggu selama lampu hijau menyala
  digitalWrite(green2, LOW);   // Matikan hijau jalur 2
  digitalWrite(yellow2, HIGH); // Nyalakan kuning jalur 2
  delay(yellowTime);           // Tunggu kuning
  digitalWrite(yellow2, LOW);  // Matikan kuning jalur 2
  digitalWrite(red2, HIGH);    // Nyalakan merah jalur 2

  // Siklus untuk jalur 3 hijau, jalur 1 & 2 merah
  digitalWrite(green3, HIGH);  // Hijau untuk jalur 3
  digitalWrite(red1, HIGH);    // Merah untuk jalur 1
  digitalWrite(red2, HIGH);    // Merah untuk jalur 2
  delay(greenTime);            // Tunggu selama lampu hijau menyala
  digitalWrite(green3, LOW);   // Matikan hijau jalur 3
  digitalWrite(yellow3, HIGH); // Nyalakan kuning jalur 3
  delay(yellowTime);           // Tunggu kuning
  digitalWrite(yellow3, LOW);  // Matikan kuning jalur 3
  digitalWrite(red3, HIGH);    // Nyalakan merah jalur 3
}

