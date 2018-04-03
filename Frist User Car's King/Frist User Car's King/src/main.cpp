#include<iostream>
#include<string>
#include<vector>
#include<thread>

using namespace std;
class Car{
public:

private:
    int hash_tag;
	string owner_name;

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
private:
	int now_state;
	Tire can_stop;
};
class Handle
{
public:

private:
	int now_angle;
	int now_state;
	int circle_size;

};

int main() {

	return 0;
}