#include <stddef.h>

// function prototypes
void onOTAStart();
void onOTAProgress(size_t current, size_t final);
void onOTAEnd(bool success);
void wifiSetup();
