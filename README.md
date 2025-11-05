# ENVIRONCLOCK ⏰🌡️

An embedded systems mini project that combines an inbuilt real-time clock, temperature sensing, alarm functionality, and buzzer — all displayed on an LCD with smooth scrolling animations.

---

## 🌟 Features

* Displays real-time clock (Hours, Minutes, Seconds)
* Shows Date (DD/MM/YYYY)
* Displays real-time temperature using the **LM35** sensor
* Custom alarm setting with LCD text scrolling animation
* Custom character for **degree Celsius (°C)** symbol
* Alarm buzzer triggers when the set time matches the real-time clock
* Utilizes **ADC** to read temperature sensor data
* Uses **Interrupts** to display the user menu instantly when a key is pressed, ensuring fast and responsive navigation

---

## ⚙️ Tools & Components

* **Microcontroller:** LPC2148 (with inbuilt RTC peripheral)
* **LCD Display:** 16x2 character LCD
* **Temperature Sensor:** LM35
* **Buzzer:** For alarm indication
* **Software Tools:** Embedded C, Keil µVision, Proteus Simulation, Flash Magic

---

## 🧠 Working Principle

1. The **inbuilt RTC** in LPC2148 provides real-time data (hours, minutes, seconds, and date) using internal registers.
2. The **LM35 temperature sensor** outputs an analog voltage proportional to temperature, which is converted to digital using the LPC2148’s **ADC**.
3. The **LCD (16x2)** displays time, date, and temperature with smooth scrolling animation.
4. The **alarm feature** allows the user to set a desired time; when matched, the **buzzer** activates automatically.
5. **External Interrupts** are used to display the user menu whenever a key is pressed, providing quick and interactive user control.

---

## 🖥️ Circuit Diagram

Below is the Proteus circuit diagram used in this project:

![Circuit Diagram](images/circuit_diagram.png.png)

**Explanation:**

* The **LPC2148** is interfaced with the **LM35 sensor**, **LCD**, and **buzzer**.
* **ADC channel** reads the LM35 output voltage.
* The **inbuilt RTC** handles real-time operations without external components.
* **External Interrupt** is used to trigger the menu display upon user key input.
* **Buzzer** alerts the user when the alarm time is reached.

---

## 🧰 Software Used

* **Keil µVision IDE** – for Embedded C code development and debugging
* **Proteus 8 Professional** – for schematic design and real-time simulation
* **Flash Magic** – for *code dumping* (flashing the compiled `.hex` file into LPC2148 via UART)*

---

## 👨‍💻 Author

**Naveen Gandla**
📍 *Embedded Systems Engineer*
💡 Passionate about real-time embedded applications and hardware–software integration.
