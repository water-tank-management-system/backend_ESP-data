/* ========================================

Header Files
Related to Networking

======================================== */


#ifndef Network_H
#define Network_H


#include <CapstoneA9.h>


// ===== User-Defined Constant =====

// Insert your network credentials
#define WIFI_SSID "Muafi"
#define WIFI_PASSWORD "pwnya11ya"

// Insert Firebase project API Key
#define API_KEY "AIzaSyDJlpJpVNwQoqoxJPM7RExPtvR0v0hzh6U"

// Insert Authorized Email and Corresponding Password
#define USER_EMAIL "admin@capstonea9.id"
#define USER_PASSWORD "nilaicapstonea"

// Insert RTDB URLefine the RTDB URL
#define DATABASE_URL "https://monitoring-mobile-app-6100c-default-rtdb.firebaseio.com/"


// ===== User-Defined Object =====

// Define Firebase objects
extern FirebaseData fbdo;
extern FirebaseAuth auth;
extern FirebaseConfig config;

// Define Firebase JSON objects
extern FirebaseJson json;

// Create Software Serial Object
extern SoftwareSerial espSS;

// Define NTP Client to get time
extern WiFiUDP ntpUDP;
extern NTPClient timeClient;


// ===== User-Defined Functions Declarations =====

// Initialize WiFi Connection
void initWiFi();

// Initialize Firebase Configuration
void initFirebase();

// Function that gets current epoch time
unsigned long getTime();


#endif