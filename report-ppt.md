---
marp: true
author: 
 - Νίκος Λιθαρής
 - Οδυσσέας Οικονόμου
size: 4:3
---

# Το πρόβλημα

Στόχος μας είναι να λύσουμε την πολυπλοκότητα των παραδοσιακών συστημάτων οικιακού αυτοματισμού. Οι χρήστες αντιμετωπίζουν σήμερα προκλήσεις με τη διαχείριση πολλαπλών συσκευών, διεπαφών και εφαρμογών, με αποτέλεσμα την κατακερματισμένη εμπειρία. Στόχος μας είναι να παρέχουμε μια κεντρική λύση που απλοποιεί τη διαχείριση των συσκευών, ενισχύει τον έλεγχο και βελτιώνει την αποτελεσματικότητα στον οικιακό αυτοματισμό.

---

# Υπάρχουσες προσεγγίσεις

- Alexa
- Google Home Assistand
- MI Smart Home

---

# Η δική μας προσέγγιση

Η προσέγγισή μας στον οικιακό αυτοματισμό με το Arduino επικεντρώνεται στην εφαρμογή "The Jon Zone". Απλοποιεί τα παραδοσιακά συστήματα οικιακού αυτοματισμού παρέχοντας μια κεντρική, φιλική προς το χρήστη λύση. Χρησιμοποιώντας το Arduino και συσκευές IoT, επιτρέπει τον απρόσκοπτο έλεγχο, τον εξατομικευμένο αυτοματισμό και τη βελτιστοποίηση της ενέργειας.

---

# Hardware

- Arduino Board

- IoT Devices: smart lights, smart plugs, smart thermostats, smart locks, and other devices compatible with Arduino.

---

# Hardware

- Sensors: temperature sensors, motion sensors, light sensors, humidity sensors, and gas sensors.

- Actuators: Common examples include relays, motor controllers, and servo motors.
---

# Αρχιτεκτονική

```mermaid
graph LR
    UI(User Interface) --> Arduino_Board
    Arduino_Board --> IoT_Devices
    Arduino_Board --> Sensors
    Arduino_Board --> Actuators
    Arduino_Board --> Data_Processing_Logic
    Arduino_Board --> Communication
    Communication --> IoT_Devices
    Sensors --> Data_Processing_Logic
    Data_Processing_Logic --> Actuators
    Power_Supply --> Arduino_Board

```

---

# Μεθοδολογία αξιολόγησης

---

# Δυσκολίες