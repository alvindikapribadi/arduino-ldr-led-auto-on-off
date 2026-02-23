# Arduino LDR LED Auto ON OFF

This project demonstrates how to build an automatic light control system using an LDR (Light Dependent Resistor) and Arduino.

The LED turns ON automatically when it is dark and turns OFF when it is bright.

---

## 📌 Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- 33K Resistor (Voltage Divider)
- LED
- 220 Ohm Resistor
- Breadboard
- Jumper Wires

---

## 🔌 Wiring Instructions

### LDR Voltage Divider
- One leg of LDR → 5V
- Other leg of LDR → A0
- 33K resistor from A0 → GND

### LED
- LED Anode (+) → Pin 8 (through 220Ω resistor)
- LED Cathode (−) → GND

---

## ⚙️ How It Works

The Arduino reads the analog value from the LDR using pin A0.

If the light level is below the threshold (dark environment), the LED turns ON.

If the light level is above the threshold (bright environment), the LED turns OFF.

You can adjust the threshold value inside the code depending on your room lighting.

---

## 📥 Code

Open the `.ino` file in Arduino IDE and upload it to your board.

---

## 🎥 Video Tutorial

Watch the full tutorial on YouTube:
https://youtu.be/SRmII0MaIQU

---

## 📜 License

This project is open-source and free to use for learning purposes.
