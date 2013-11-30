



	// get all information about the chosen airport
	// store it in classes ( map information stored in MAP CLASS... flight numbers, destination, airline, flight information in FLIGHT CLASS)
	AirpInfo mainInfo(airport); 


	// search for the destination and the airline in the FLIGHT CLASS and return
	//all accessible flight information 
	mainInfo.search_flight_info(destination, airline);

	// search for the flight number in the FLIGHT CLASS and return
	//all accessible flight information
	mainInfo.search_flight_info(flight_number);