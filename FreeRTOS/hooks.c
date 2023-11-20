#include "FreeRTOS.h"
#include "task.h"

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    // Handle stack overflow here
    // For example, log the task name and take corrective actions
    // Or print an error message
    (void)xTask;
    (void)pcTaskName;

    // You can add your handling code here
}
