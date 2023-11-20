
# FreeRTOS Project

## Overview

This project demonstrates a simple FreeRTOS Kernel running on top of a Linux Base image. This could be used to quickly get the dev container runnning.

## Project Structure

```
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
```

## Usage
To compile and run the project:

1. Ensure you have Docker for Desktop Running.
2. Clone the repository.
3. Re-open using the Dev Container extension in VS CODE.

### Building the Project

```
mkdir build
cd build 
cmake .. 
cmake --build .
```


### Running the Executable
```
./HelloWorld

Or use the custom Keys showing up in the editor. To stop Press Ctrl + C .
```

## Modifying the FreeRTOS Task
To modify the FreeRTOS task, open `src/main.c` and edit the `periodicPrintTask` function.

## Additional Notes
- Ensure you have the necessary toolchain and FreeRTOS dependencies installed.
- Adjust the FreeRTOS configuration in `FreeRTOSConfig.h` as needed for your application.
- For further details on FreeRTOS, refer to the official [FreeRTOS documentation](https://www.freertos.org/).

## Further Support

1. Can be extended for Application Trace.
2. Documentation and Debugging tools can be added.

