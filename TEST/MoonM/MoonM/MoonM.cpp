// ConsoleApplication6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
/*
내부가 아직 구현되지 않은 더미 클래스
*/
namespace Units {
	class Unit {
	public:
		Unit() {};
		Unit(short health_, short stemina_, short see_range_, std::tuple<short, short, char> Tile) {
			auto[tile_x, tile_y, country_] = Tile;
			position_x = tile_x;
			position_y = tile_y;
			country = country_;
			health = health_;
			stemina = stemina_;
			see_range = see_range_;
		};

		[[nodiscard]]std::pair<short, short> getPosition() {
			return { position_x, position_y };
		};
		[[nodiscard]]std::tuple<char,short, short, short> getinfomations() {
			return { country, health, stemina, see_range };
		};

		[[nodiscard]]std::pair<short, short> move_to(std::pair<short, short> objective_tile) {
			auto[x, y] = objective_tile;
			std::cout << x << y << std::endl;

			return { x, y };
		};
	protected:
		void change_country(char enemy_country) {
			country = enemy_country;
		};
		void set_state(short state_) {
			state = state_;
		};
		char myCountry() {
			return country;
		};
	private:
		char country;
		short position_x;
		short position_y;

		short see_range;
		short health;
		short stemina;
		short state;
	};
	class Battle_Unit : Unit {
	public:
		Battle_Unit() {};
		Battle_Unit(short health_, short stemina_, short see_range_, std::tuple<char,short, short> position) : Unit(health_, stemina_, see_range_, position) {

		};
		[[noreturn]]void attack(Battle_Unit& enemy) {
			enemy.set_state(3);
			set_state(3);
		};
		[[noreturn]]void obsesse(Creat_Unit& enemy) {
			enemy.change_country(myCountry());
		};
	private:

	};
	class Creat_Unit : Unit{
	public:
		void change_country(char enemy_country) {
			change_country(enemy_country);
			
		};
	};
}
int main() {
	//{'L', 4, 5 } will chage to Tile
	Units::Unit A(1, 2, 3, {'L', 4, 5 });
	Units::Unit B(45, 87, 64, {'A', 85,45 });

	auto[a, b, c, d] = A.getinfomations();

	std::cout << a << b << c << d << std::endl;
	A.move_to({ 5,6 });

}