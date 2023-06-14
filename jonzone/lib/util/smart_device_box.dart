import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

// ignore: must_be_immutable
class SmartDeviceBox extends StatelessWidget {
  final String smartDeviceName;
  final String smartDeviceIcon;
  final bool powerOn;
  void Function(bool)? onChanged;

  SmartDeviceBox({
    super.key,
    required this.smartDeviceName,
    required this.smartDeviceIcon,
    required this.powerOn,
    required this.onChanged,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(15.0),
      child: Container(
          decoration: BoxDecoration(
              color: powerOn ? Colors.white : Colors.grey[900],
              borderRadius: BorderRadius.circular(24.0)),
          padding: const EdgeInsets.symmetric(vertical: 25),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              //Icon
              Image.asset(
                smartDeviceIcon,
                height: 65,
                color: powerOn ? Colors.teal : Colors.white,
              ),

              Row(
                children: [
                  Expanded(
                      child: Padding(
                    padding: const EdgeInsets.only(left: 15.0),
                    child: Text(
                      smartDeviceName,
                      style: TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 20,
                          color: powerOn ? Colors.teal : Colors.white),
                    ),
                  )),
                  CupertinoSwitch(
                    value: powerOn,
                    onChanged: onChanged,
                  )
                ],
              )
            ],
          )),
    );
  }
}
