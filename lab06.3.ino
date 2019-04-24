#define Do 440
const byte audio11 = 4;
int dotLen = 150;
int dashLen = 700;
int incomingByte = 0; // 用來儲存收進來的 data byte
 
void setup() {
    Serial.begin(9600);
}
 
void loop() {
    // 檢查是否有資料可供讀取
    if (Serial.available() > 0) {
        // 讀取進來的 byte
        incomingByte = Serial.read();
 
        // 印出收到的資料
        Serial.println(incomingByte, DEC);
        GetChar(incomingByte);
        delay(800);
    }
}
 
void MorseDot() {
    tone(audio11, Do, dotLen); // start playing a tone
    delay(500); // hold in this position
}
 
// DASH
void MorseDash() {
    tone(audio11, Do, dashLen); // start playing a tone
    delay(800); // hold in this position
}
 
void GetChar(char tmpChar) {
    switch (tmpChar) {
        case 'a':
            MorseDot();
            MorseDash();
            break;
        case 'b':
            MorseDash();
            MorseDot();
            MorseDot();
            MorseDot();
            break;
        case 'c':
            MorseDash();
            MorseDot();
            MorseDash();
            MorseDot();
            break;
        case 'd':
            MorseDash();
            MorseDash();
            MorseDot();
            break;
        case 'e':
            MorseDot();
 
            break;
        case 'f':
            MorseDot();
 
            MorseDot();
 
            MorseDash();
 
            MorseDot();
 
            break;
        case 'g':
            MorseDash();
 
            MorseDash();
 
            MorseDot();
 
            break;
        case 'h':
            MorseDot();
 
            MorseDot();
 
            MorseDot();
 
            MorseDot();
 
            break;
        case 'i':
            MorseDot();
 
            MorseDot();
 
            break;
        case 'j':
            MorseDot();
 
            MorseDash();
 
            MorseDash();
 
            MorseDash();
 
            break;
        case 'k':
            MorseDash();
 
            MorseDot();
 
            MorseDash();
 
            break;
        case 'l':
            MorseDot();
 
            MorseDash();
 
            MorseDot();
 
            MorseDot();
 
            break;
        case 'm':
            MorseDash();
            MorseDash();
 
            break;
        case 'n':
            MorseDash();
 
            MorseDot();
 
            break;
        case 'o':
            MorseDash();
 
            MorseDash();
 
            MorseDash();
 
            break;
        case 'p':
            MorseDot();
 
            MorseDash();
 
            MorseDash();
 
            MorseDot();
 
            break;
        case 'q':
            MorseDash();
 
            MorseDash();
 
            MorseDot();
 
            MorseDash();
 
            break;
        case 'r':
            MorseDot();
 
            MorseDash();
 
            MorseDot();
 
            break;
        case 's':
            MorseDot();
 
            MorseDot();
 
            MorseDot();
 
            break;
        case 't':
            MorseDash();
 
            break;
        case 'u':
            MorseDot();
 
            MorseDot();
 
            MorseDash();
 
            break;
        case 'v':
            MorseDot();
 
            MorseDot();
 
            MorseDot();
 
            MorseDash();
 
            break;
        case 'w':
            MorseDot();
 
            MorseDash();
 
            MorseDash();
 
            break;
        case 'x':
            MorseDash();
 
            MorseDot();
 
            MorseDot();
 
            MorseDash();
 
            break;
        case 'y':
            MorseDash();
            MorseDot();
            MorseDash();
            MorseDash();
            break;
        case 'z':
            MorseDash();
            MorseDash();
            MorseDot();
            MorseDot();
            break;
        case '0':
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDash();
            break;
        case '1':
            MorseDot();
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDash();
            break;
        case '2':
            MorseDot();
            MorseDot();
            MorseDash();
            MorseDash();
            MorseDash();
            break;
        case '3':
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDash();
            MorseDash();
            break;
        case '4':
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDash();
            break;
        case '5':
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDot();
            break;
        case '6':
            MorseDash();
            MorseDot();
            MorseDot();
            MorseDot();
            MorseDot();
            break;
        case '7':
            MorseDash();
            MorseDash();
            MorseDot();
            MorseDot();
            MorseDot();
            break;
        case '8':
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDot();
            MorseDot();
            break;
        case '9':
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDash();
            MorseDot();
            break;
 
        default:
            break;
    }
}
