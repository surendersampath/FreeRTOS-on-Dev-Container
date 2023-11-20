
# FreeRTOS Project

## Overview
This project demonstrates a simple FreeRTOS setup with a periodic task printing "Hello, FreeRTOS!" every 3 seconds.

## Project Structure
ProjectFolder

-   CMakeLists.txt (main)
-   src
    -   main.c -------------< Start here.
-   FreeRTOS
    -   croutine.c
    -   event_groups.c
    -   list.c
    -   queue.c
    -   stream_buffer.c
    -   tasks.c
    -   timers.c
    -   include (folder)
        -   FreeRTOSConfig.h
        -   Header files for FreeRTOS
    -   portable (folder)
        -   Posix (folder)
            -   port.c
            -   portmacro.h
            -   utils (folder)
                -   wait_for_event.c
                -   wait_for_event.h






## Usage
To compile and run the project:

1. Ensure you have Docker for Desktop Running.
2. Clone the repository.
3. Re-open using the Dev Container extension in VS CODE.

### Building the Project
mkdir build
cd build 
cmake .. 
cmake --build .


### Running the Executable
Run the built executable:


## Modifying the FreeRTOS Task
To modify the FreeRTOS task, open `src/main.c` and edit the `periodicPrintTask` function.

## Additional Notes
- Ensure you have the necessary toolchain and FreeRTOS dependencies installed.
- Adjust the FreeRTOS configuration in `FreeRTOSConfig.h` as needed for your application.
- For further details on FreeRTOS, refer to the official [FreeRTOS documentation](https://www.freertos.org/).


