#pragma config(Sensor, in2,    IR,             sensorLineFollower)
#pragma config(Motor,  port2,           Feeder,        tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           Flashy,        tmotorVexFlashlight, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//Calibration Values
int feederDelay = 50;
int feederRun = 20;

//Code Variables
int feedCount = 0;
task main()
{
	while (true){
		if (feedCount > feedDelay){
			motor[Feeder] = 10;
			if (feedCount > (feedDelay + feedRun)){

		}
	}
}
