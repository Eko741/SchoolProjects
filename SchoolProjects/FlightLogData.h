#pragma once
struct FlightLogData {
	int longestWaitTimeAir = 0, longestWaitTimeGround = 0;
	double averageWaitTimeAir = 0, averageWaitTimeGround = 0, averageStripUse = 0, failRate = 0;
};
