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
│   └── 16_device_startup_counter.c
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
