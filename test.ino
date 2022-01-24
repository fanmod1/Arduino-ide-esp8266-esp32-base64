#include <fanbase64.h>

String base64jia(String s){
  char b64data[256];
  b64_encode(b64data, (char *)s.c_str(),s.length());
  return String(b64data);
}
String base64jie(String b64data){
  char decoded[256];
  String ss(b64data);
  b64_decode( decoded , (char *)ss.c_str() , ss.length() );
  return String(decoded);
}


void setup(){
  Serial.begin(9600);
  
  Serial.println("");
  Serial.println(base64jia("test_test_test"));
  Serial.println(base64jie("dGVzdF90ZXN0X3Rlc3Q="));
}

void loop(){ }
