# Embedded C

A collection of Embedded C programs, practical exercises, and microcontroller projects documenting my learning journey in embedded systems and firmware development.

## Programs

### 01. Basics
- **Device Startup Message** — Prints device name, microcontroller, startup status, and operating mode.
- **Battery Voltage Monitoring** — Calculates power and remaining voltage from sample battery readings.
- **Sensor Data Monitoring** — Displays a device ID, sensor voltage, current, and device status.
- **Temperature Monitoring** — Classifies a temperature reading as high, normal, or low using conditional statements.
- **Motor Control System** — Uses a switch-case statement to process motor ON, OFF, forward, and reverse commands.
- **Sensor Monitoring Counter (for loop)** — Prints 10 sensor readings using a for loop.
- **Sensor Monitoring Counter (while loop)** — Prints 10 sensor values using a while loop.
- **Embedded Device Initialization** — Uses a do-while loop to repeat device initialization five times.
- **Temperature Monitoring Using Functions** — Uses a function to check whether the temperature exceeds 40°C.
- **Multiple Sensor Data Monitoring** — Displays five temperature readings and calculates their total and average.
- **Sensor Value Using Pointers** — Reads and updates a sensor value using a pointer.
- **Embedded Device Identification** — Uses string functions to display, measure, and compare device information.
- **Sensor Data Management System** — Uses a structure to store sensor details and calculate power.
- **Memory-Efficient Sensor Data** — Uses a union to store temperature, voltage, or status in shared memory.
- **Embedded Device Configuration** — Uses `typedef struct` to define and store device configuration details.
- **Device Startup Counter** — Uses a static local variable to count function calls across repeated startups.
- **Embedded Safety Monitoring System** — Uses `#define`, `const`, and `volatile` to monitor battery voltage and trigger an over-voltage alert.
- **Microcontroller Register Control** — Uses bitwise OR, AND, and XOR operations to set, clear, and toggle register bits.

### 02. Pointers and Dynamic Memory
- **Temperature Sensor Value Using Pointers** — Reads, displays, and updates a variable through a pointer.
- **Sensor Array Using Pointer Arithmetic** — Accesses array elements using pointer arithmetic.
- **Microcontroller Name Using Pointers** — Traverses a character array and counts characters using a pointer.
- **Sensor Value Using a Double Pointer** — Reads and updates a variable using a pointer to a pointer.
- **Safe Sensor Pointer** — Initializes a pointer with `NULL` and checks it before dereferencing.
- **Read-Only Sensor Pointer** — Uses a pointer to constant data.
- **Fixed Sensor Address** — Uses a constant pointer to update the value at a fixed address.
- **Read-Only Fixed Sensor Pointer** — Uses a constant pointer to constant data.
- **Dynamically Store Sensor Readings** — Allocates memory with `malloc()`, stores readings, calculates the total, and releases memory.
- **Expand Sensor Storage** — Uses `realloc()` to increase dynamically allocated storage.
- **Practice 30: Sensor Readings Average** — Dynamically stores five readings and calculates their total and average.
- **Practice 31: Dynamic Allocation of One Integer** — Allocates memory for one integer, stores and prints a value, then frees the memory and sets the pointer to `NULL`.
- **Practice 32: Resize Sensor Storage Using realloc** — Resizes dynamically allocated memory to store five sensor readings.
- **Practice 33: Allocate and Free Three Integers** — Stores and displays three integers, frees the memory once, and checks the pointer.
- **Practice 34: Local and Dynamic Integer Memory** — Compares a local integer variable with a dynamically allocated integer.
- **Practice 35: Variable Scope in an Inner Block** — Demonstrates the scope of a variable declared inside an inner block.
- **Practice 36: Global Sensor Value Using extern** — Accesses and displays a global variable using `extern` inside a function.

## Repository Structure

```
Embedded-C/
├── 01_Basics/
│   ├── 01_device_startup_message.c
│   ├── 02_battery_voltage_monitoring.c
│   ├── 03_sensor_data_monitoring.c
│   ├── 04_temperature_monitoring.c
│   ├── 05_motor_control_system.c
│   ├── 06_sensor_monitoring_counter_for_loop.c
│   ├── 07_sensor_monitoring_counter_while_loop.c
│   ├── 08_embedded_device_initialization.c
│   ├── 09_temperature_monitoring_using_functions.c
│   ├── 10_multiple_sensor_data_monitoring.c
│   ├── 11_sensor_value_using_pointers.c
│   ├── 12_embedded_device_identification.c
│   ├── 13_sensor_data_management_system.c
│   ├── 14_memory_efficient_sensor_data.c
│   ├── 15_embedded_device_configuration.c
│   ├── 16_device_startup_counter.c
│   ├── 17_embedded_safety_monitoring_system.c
│   └── 18_microcontroller_register_control.c
├── 02_Pointers_and_Dynamic_Memory/
│   ├── 01_temperature_sensor_value_using_pointers.c
│   ├── 02_sensor_array_using_pointer_arithmetic.c
│   ├── 03_microcontroller_name_using_pointers.c
│   ├── 04_sensor_value_using_double_pointer.c
│   ├── 05_safe_sensor_pointer.c
│   ├── 06_read_only_sensor_pointer.c
│   ├── 07_fixed_sensor_address.c
│   ├── 08_read_only_fixed_sensor_pointer.c
│   ├── 09_dynamically_store_sensor_readings.c
│   ├── 10_expand_sensor_storage.c
│   ├── 11_practice_30_sensor_readings_average.c
│   ├── 12_dynamic_allocation_single_integer.c
│   ├── 13_resize_sensor_storage_using_realloc.c
│   ├── 14_allocate_and_free_three_integers.c
│   ├── 15_local_and_dynamic_integer_memory.c
│   ├── 16_variable_scope_inner_block.c
│   └── 17_extern_global_sensor_value.c
└── README.md
```

## Compile and Run

Using GCC:

```bash
gcc path/to/program.c -o program
./program
```

On Windows, run the generated executable:

```bash
program.exe
```

> These are beginner-level practice programs using sample values. They do not interface with actual sensors or an STM32 microcontroller yet.
