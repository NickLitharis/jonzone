import 'package:flutter/material.dart';
import 'package:jonzone/util/smart_device_box.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  // ignore: library_private_types_in_public_api
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  //smart devices
  List mySmartDevices = [
    ["Smart AC", "lib/icons/air-conditioner.png", false],
    ["Smart Heater", "lib/icons/thermostat.png", false],
    ["Smart Door", "lib/icons/smart-door.png", false],
    ["Smart Light", "lib/icons/smart-light.png", true]
  ];

  void powerSwitchChanged(bool value, int index) {
    setState(() {
      mySmartDevices[index][2] = value;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.teal[100],
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(
                    horizontal: 25.0, vertical: 10.0),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Image.asset("lib/icons/menu.png",
                        height: 45, color: Colors.teal[900]),
                    Icon(Icons.person, size: 45, color: Colors.teal[900]),
                  ],
                ),
              ),
              const SizedBox(height: 20.0),
              const Padding(
                padding: EdgeInsets.symmetric(horizontal: 8.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text("Welcome Home"),
                    Text("User",
                        style: TextStyle(
                            fontSize: 30.0, fontWeight: FontWeight.bold)),
                  ],
                ),
              ),

              // Smart Devices
              const SizedBox(height: 20.0),

              const Padding(
                padding: EdgeInsets.symmetric(horizontal: 25),
                child: Text("Smart Devices"),
              ),

              Expanded(
                  child: GridView.builder(
                itemCount: mySmartDevices.length,
                padding: const EdgeInsets.all(25.0),
                gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                    crossAxisCount: 2, childAspectRatio: 1 / 1.3),
                itemBuilder: (context, index) {
                  return SmartDeviceBox(
                    smartDeviceName: mySmartDevices[index][0],
                    smartDeviceIcon: mySmartDevices[index][1],
                    powerOn: mySmartDevices[index][2],
                    onChanged: (value) => powerSwitchChanged(value, index),
                  );
                },
              ))
            ],
          ),
        ));
  }
}
