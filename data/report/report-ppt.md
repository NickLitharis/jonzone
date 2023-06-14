---
author: 
 - Νίκος Λιθαρής
 - Οδυσσέας Οικονόμου
---

# Το πρόβλημα

Στόχος μας είναι να λύσουμε την πολυπλοκότητα των παραδοσιακών συστημάτων οικιακού αυτοματισμού. Οι χρήστες αντιμετωπίζουν σήμερα προκλήσεις με τη διαχείριση πολλαπλών συσκευών, διεπαφών και εφαρμογών, με αποτέλεσμα την κατακερματισμένη εμπειρία. Στόχος μας είναι να παρέχουμε μια κεντρική λύση που απλοποιεί τη διαχείριση των συσκευών, ενισχύει τον έλεγχο και βελτιώνει την αποτελεσματικότητα στον οικιακό αυτοματισμό.

# Υπάρχουσες προσεγγίσεις

- Alexa
- Google Home Assistand
- MI Smart Home

# Η δική μας προσέγγιση

Η προσέγγισή μας στον οικιακό αυτοματισμό με το Arduino επικεντρώνεται στην εφαρμογή "The Jon Zone". Απλοποιεί τα παραδοσιακά συστήματα οικιακού αυτοματισμού παρέχοντας μια κεντρική, φιλική προς το χρήστη λύση. Χρησιμοποιώντας το Arduino και συσκευές IoT, επιτρέπει τον απρόσκοπτο έλεγχο, τον εξατομικευμένο αυτοματισμό και τη βελτιστοποίηση της ενέργειας.

# Hardware

- Πλακέτα Arduino

- Συσκευές IoT: έξυπνα φώτα, έξυπνες πρίζες, έξυπνοι θερμοστάτες, έξυπνες κλειδαριές και άλλες συσκευές συμβατές με το Arduino.

- Αισθητήρες: αισθητήρες θερμοκρασίας, αισθητήρες κίνησης, αισθητήρες φωτός, αισθητήρες υγρασίας.

- Ενεργοποιητές: ηλεκτρονόμοι, σερβοκινητήρες.

# Αρχιτεκτονική


```mermaid
graph TD
    UI(User Interface) --> Arduino_Board[Arduino Board]
    Arduino_Board --> UI
    Arduino_Board --> Data_Processing_Logic[Data Processing Logic]
    Data_Processing_Logic --> Arduino_Board
    Sensors --> Arduino_Board
    Actuators/Devices --> Data_Processing_Logic
    Data_Processing_Logic --> Actuators/Devices
    Data_Processing_Logic --> Algorithms[Processing Algorithms]
    Algorithms[Processing Algorithms] --> Data_Processing_Logic
    Sensors --> Temperature
    Sensors --> Light
    Sensors --> Motion
    Sensors --> Humidity
    Actuators/Devices --> Thermostat
    Actuators/Devices --> Smart_Lamp[Smart Lamp]
```


# Μεθοδολογία αξιολόγησης

# Δυσκολίες
