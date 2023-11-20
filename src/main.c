#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"

// Task that prints "Hello, FreeRTOS!" every 3 seconds
void periodicPrintTask(void *pvParameters) {
    const TickType_t xDelay = pdMS_TO_TICKS(3000); // Delay in milliseconds (3 seconds)

    while (1) {
        printf("Hello, FreeRTOS!\n");
        vTaskDelay(xDelay); // Delay for 3 seconds
    }
}

int main() {
    // Create a task with priority 1 and stack size 100 words
    xTaskCreate(periodicPrintTask, "PeriodicPrint", 100, NULL, 1, NULL);

    // Start the scheduler
    vTaskStartScheduler();

    // This line should not be reached
    for (;;) {}

    return 0;
}
