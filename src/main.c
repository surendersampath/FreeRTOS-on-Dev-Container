#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"

// Task that Sends Notification "Hello, FreeRTOS!" every 3 seconds
void sendingTask(void *pvParameters) {
    TaskHandle_t xTaskToNotify = (TaskHandle_t)pvParameters;
    const TickType_t xDelay = pdMS_TO_TICKS(3000); // Delay in milliseconds (3 seconds)

    while (1) {
        xTaskNotifyGive(xTaskToNotify); // Notify the receiving task
        printf("Hello, FreeRTOS! Sending Task Notification\n");
        vTaskDelay(xDelay); // Delay for 3 seconds

    }
}


// Task that receives the notification
void receivingTask(void *pvParameters) {
    for (;;) {
        // Wait for a notification indefinitely
        ulTaskNotifyTake(pdTRUE, portMAX_DELAY);

        printf("Notification received!\n");
    }
}

int main() {

    TaskHandle_t xTaskToNotify;
    // Create a task with priority 1 and stack size 100 words
    xTaskCreate(receivingTask, "Receiving Task", 100, NULL, 1, &xTaskToNotify);
        
    xTaskCreate(sendingTask, "SendingTask", 100, (void *)xTaskToNotify, 1, NULL);


    // Start the scheduler
    vTaskStartScheduler();

    // This line should not be reached
    for (;;) {}

    return 0;
}
