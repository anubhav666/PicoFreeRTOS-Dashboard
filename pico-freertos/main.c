#include <stdio.h>
#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "task.h"

void simulate_data_task(void *pvParameters) {
    while (1) {
        float temp = 30 + (rand() % 1000) / 100.0f;  // Simulated temperature
        const char *status = (rand() % 10 > 2) ? "OK" : "ERROR";

        printf("{\"device_id\":\"pico01\",\"status\":\"%s\",\"temp_sim\":%.2f}\n", status, temp);

        vTaskDelay(pdMS_TO_TICKS(3000));  // every 3s
    }
}

int main() {
    stdio_init_all();  // enable USB serial

    xTaskCreate(simulate_data_task, "DataSim", 256, NULL, 1, NULL);

    vTaskStartScheduler();

    while (true) {
        tight_loop_contents();  // should never reach here
    }
}