#include <stdio.h>
#include <time.h>
int main() {
    time_t currentTime;
    struct tm *localTime;
	while(1) {
        // Get current time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);
	// Print time in digital format
        printf("%02d:%02d:%02d\r",localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
	// Wait for 1 second
        sleep(1);
    }
	return 0;
}

