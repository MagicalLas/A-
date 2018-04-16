#include<iostream>
#include<string>
#include<vector>
#include<thread>

using namespace std;


class Car{
public:
	void go();
	void stop(int object_speed);
	void now_state();
	Car(int car_num ,string name = "LAS",int tire_num=4, int break_num=2,int handle_num=1) {
		
	};
private:
	void set_first(string name, int hash) {
		this->hash_tag = hash;
		this->owner_name = name;
	};
	void set_inside(int tire_num, int break_num, int handle_num) {
		this->hendling=inside_control();
	}
    int hash_tag;
	string owner_name;
	inside_control hendling;
	int weight;

};

class inside_control {

private:
	vector<Tire> tires;
	Handle handle;

};
class Tire {
public:
	int get_speed() {
		return (this->now_RPM)*tire_size*60;
	};
	void accel_speed(int object_RPM) {

	};
private:
	int now_RPM;
	int now_angle;
	int now_state;
	//size = meter
	double tire_size;
};

class Breake {
public:
	bool i_want_stop(int object_speed, int progress_time) {
		int now_tire_speed = can_stop.get_speed();
		bool thread_type = now_tire_speed - object_speed > now_tire_speed / 10 ? true : false;
		
	};
	void just_stop() {
	};
private:
	int now_state;
	Tire can_stop;
};
class Handle
{
public:
	void beep() {
		cout << "BEEP" << endl;
	};

private:
	int now_angle;
	int now_state;
	int circle_size;

};
class Accelerter
{
public:
	Accelerter();

private:

};
static class Ground {
private:
	static const int 마찰계수 = 10;
	static const int 공기저항 = 1;
};


int main() {

}