#pragma once
class cFahrrad
{
private:
	int radzahl;
	double luftdruck;
public:
	cFahrrad();
	cFahrrad(int radzahl_in, double luftdruck_in);
	int get_radzahl();
	double get_luftdruck();
	double aufpumpen(double druckplus);
};

