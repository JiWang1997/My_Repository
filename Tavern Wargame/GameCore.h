#pragma once
#include<vector>
namespace GameCore {


	//��ӻ���
	class Entourage {
	public:
		//Entourage(int x, int y) :aggressivity(x), life(y) {};
		Entourage();
		//Entourage attack;


		void attack_Entourage();//�����з����
		void be_attacked_Entourage(int aggressivity_enemy);//�ҷ���ӱ�����
		void show();
		
	private:
		int aggressivity;//������
		int life;//������
		
	};
	//�����
	class Charactor {
	public :
		Charactor();
		void attack_c();//Player attack
		void buy();
		void sell();
		void flash();
		void set_on();
		void lift_down();
			
	private:
		int life;
		bool life_event;//���״̬(living or die)
		int init_num_Entourage;//��ʼ�������
		int init_num_gold;//��ʼ�������
		std::vector<Charactor*> entourages_rest;
		std::vector<Charactor*> entourages_fight;
	};

}