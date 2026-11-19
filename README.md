# Embedded C

A collection of Embedded C programs, practical exercises, and microcontroller projects documenting my learning journey in embedded systems and firmware development.

## Programs

### 01. Basics
- **Device Startup Message** — Prints device name, microcontroller, startup status, and operating mode.
- **Sensor Data Monitoring** — Displays a device ID, sensor voltage, current, and device status.

### 02. Embedded C Applications
- **Battery Voltage Monitoring** — Calculates power and remaining voltage from sample battery readings.

## Repository Structure

```
Embedded-C/
├── 01_Basics/
│   ├── 01_device_startup_message.c
│   └── 02_sensor_data_monitoring.c
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
