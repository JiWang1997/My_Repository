#include "GameCore.h"
#include<iostream>

using asio::ip::tcp;
using namespace GameCore;
Game_Life_Line::Game_Life_Line(){
	
	
	
}
void startmatch(bool match,bool ready) {
	//建立连接，返回match（true or false）
	
	asio::io_context io_context;
	tcp::resolver resolver(io_context);
	tcp::resolver::results_type endpoints = resolver.resolve("127.0.0.1", "14");
	tcp::socket socket(io_context);
	asio::connect(socket, endpoints);
	std::cout << "正在匹配...";
	asio::read(socket, asio::buffer(&match, sizeof(bool)));
	system("cls");
	std::cout << "任意键确认您已经准备就绪";
	while (_kbhit()) {
		asio::write(socket, asio::buffer(&ready, sizeof(bool)));
	}
}





GameCore::Charactor::Charactor() :life(100), life_event(1), init_num_Entourage(0), init_num_gold(3) {}
void init_Charactor() {
	
}
void Charactor::buy(GameCore::Entourage* entourage) {
	//获取商店类传递的随从信息
	entourages_rest.push_back(entourage);
}
void Charactor::sell(int i) {
	entourages_fight.erase((entourages_fight.begin()+i));
}
void Charactor::flash() {
	
}
void Charactor::set_on(int i) {
	entourages_fight.push_back((entourages_rest[i]));
	entourages_rest.erase((entourages_rest.begin()+i));
	
}
void Charactor::show_entourage() {
	//获取对面牌的数据
	asio::read(socket,asio::buffer());
	std::cout << "我方场上随从："<<std::endl;
	std::;
	std::cout << "我方场下随从："<< std::endl;
	std::;
}

GameCore::Entourage::Entourage() :gold(1), aggressivity(1), life(1) {}


