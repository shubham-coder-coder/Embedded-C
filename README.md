# Embedded C

A collection of Embedded C programs, practical exercises, and microcontroller projects documenting my learning journey in embedded systems and firmware development.

## Programs

### 01. Basics
- **Device Startup Message** — Prints device name, microcontroller, startup status, and operating mode.
- **Sensor Data Monitoring** — Displays a device ID, sensor voltage, current, and device status.
- **Temperature Monitoring** — Classifies a temperature reading as high, normal, or low using conditional statements.
- **Motor Control System** — Uses a switch-case statement to process motor ON, OFF, forward, and reverse commands.
- **Sensor Monitoring Counter (for loop)** — Prints 10 sensor readings using a for loop.
- **Sensor Monitoring Counter (while loop)** — Prints 10 sensor values using a while loop.

### 02. Embedded C Applications
- **Battery Voltage Monitoring** — Calculates power and remaining voltage from sample battery readings.

## Repository Structure

```
Embedded-C/
├── 01_Basics/
│   ├── 01_device_startup_message.c
│   ├── 02_sensor_data_monitoring.c
│   ├── 03_temperature_monitoring.c
│   ├── 04_motor_control_system.c
│   ├── 05_sensor_monitoring_counter_for_loop.c
│   └── 06_sensor_monitoring_counter_while_loop.c
├── 02_Embedded_C_Applications/
│   └── 01_battery_voltage_monitoring.c
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
