	//------------------------------------
	//---------SWITCHES START HERE--------
	//------------------------------------










	//------------------------------------
	//----------SWITCHES END HERE---------
	//------------------------------------

	Joystick.setZAxis(rotaryField - 32767);
	Joystick.setYAxis(buttonField - 32767);

	Joystick.sendState();

} //LOOP ENDS HERE

#if (LED1COUNT + LED2COUNT + LED3COUNT + LED4COUNT > 0 && BOARDTYPE == 2)
  void loop()
  {
    processCommands();
  }
#endif
