#include <windows.h>
#include <iostream>
using namespace std;
string shuru, temp;
string GAMEMODE = "ready";
int ml = 100, wl = 100, q = 0, wx = 100, mx = 100, days = 1, zz = 50;
string you = "ɣɣ:", mom = "Сѩ:";
//	cout <<  "*���Ƕ���*" << endl;
//	Sleep(2500);
//	cout << mom << "�ǾͿ���ѧϰ����"<< endl;
//	cout << you  << "��֪����" << endl;
//	cin >> shuru;

int Fight() {
	cout << mom << "������" << endl;
	Sleep(1000);
	cout <<  "*��������㣬�е���*" << endl;
	wl = wl - 5;
	mx = mx - 5;
	Sleep(1000);
	cout << "*������(�ػ�/���/����)*" << endl;
	cin >> shuru;
	if (shuru == "�ػ�") {
		cout <<  "*���ػ�������*" << endl;
		ml = ml - 10;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 10;
		wx = wx + 10;
	} else if (shuru == "���") {
		cout <<  "*�����������*" << endl;
		ml = ml - 5;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 5;
		wx = wx + 5;
	} else if (shuru == "����") {
		cout << you  << "......" << endl;
		Sleep(1000);
		cout << mom << "..." << endl;
		wx = wx - 5;
	} else {

	}
	Sleep(1000);
	return 0;
}

int Wait(int time) {
	for (int i = 0; i < time; i++) {
		Sleep(1000);
		cout << "... ";
	}
	Sleep(2500);
	cout << endl;
	return 0;
}

int Slept() {
	cout << mom << "��˯����" << endl;;
	cout << "*Ҫ˯��(�浵)��(Ҫ/��Ҫ)*" << endl;
	cin >> shuru;
	if (shuru == "Ҫ") {
		cout << mom << "˯��˯��......" << endl;;
		Sleep(2500);
		mx++;
		cout <<  "*˯����......*" << endl;
	} else if (shuru == "��Ҫ") {
		cout << mom << "������ Ҫ **** ˯ ��" << endl;;
		Sleep(2500);
		mx--;
		wx--;
		cout << you  << "��֪����" << endl;
		Sleep(3000);
		cout <<  "*˯����......*" << endl;
	} else {
		cout << mom << "����������� �� ˯ ������" << endl;;
		Sleep(2500);
		cout <<  "*˯����......*" << endl;
	}
	cout <<  "*������:" << ml << " " << wl << " " << q << " " << wx << " " << mx << " " << days << " " << zz << " " << ml + wl + q + wx + mx + days + zz << "*" << endl;
	cout << "*�����Ʊ��ܣ�*" << endl;
	if (ml <= 0) {
		GAMEMODE = "momdie";
	} else if (wl <= 0) {
		GAMEMODE = "medie";
	} else if (mx <= 0) {
		ml = ml - 5;
	} else if (wx <= 0) {
		wl = wl - 5;
	}
	return 0;
}

int Read() {
	cout <<  "*���Ƕ���*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*�����ɵأ����������*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*�����ѵأ����������*" << endl;
		zz++;
	}
	return 0;
}

int Study() {
	cout << "*Ҫ˯��(�浵)��(Ҫ/��Ҫ)*" << endl;
	cin >> shuru;
	if (shuru == "Ҫ") {
		cout << mom << "���У�����ѧϰ����" << endl;;
		Sleep(2500);
		cout <<  "*ֻ��ѧϰ��*" << endl;
		Sleep(2500);
		wx--;
		mx--;
		Read();
	} else if (shuru == "��Ҫ") {
		cout << mom << "�ǾͿ���ѧϰ����" << endl;;
		Sleep(2500);
		cout <<  "*ѧϰ��*" << endl;
		Sleep(2500);
		mx++;
		wx++;
		Read();
	} else {
		cout << mom << "�������������ѧϰ����" << endl;;
		Sleep(2500);
		cout <<  "*ѧϰ��*" << endl;
		Sleep(2500);
		Read();
	}
	return 0;
}

int Math() {
	cout <<  "*  5x+5=10  ��x������ѧ*" << endl;
	Sleep(2500);
	if (zz >= 50) {
		cout <<  "*�����ɵأ���x�ڿ�����*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*�����ѵأ���x�ڿ�����*" << endl;
		zz++;
	}
	return 0;
}

int Chinese() {
	cout <<  "*�˿����ǲ���������ĵĵ��ã������̲��Ż�����ǧ����Ļ����衣*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*���ÿ����������ķ�Χ��Բ��������*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*���ܳ�����ս�����ÿ�����Բ��������*" << endl;
		zz++;
	}
	return 0;
}

int English() {
	cout <<  "*This class is English class*" << "(����:���ſ���Ӣ���)" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*Easily,this English class is finish*" << "(����:�����ף�����Ӣ��ξ������)" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*Difficultily,this English class is finish*" << "(����:�ѣ����Ӣ��ξͽ�����)" << endl;
		zz++;
	}
	return 0;
}

int Eat() {
	cout <<  "*���������˷���*" << endl;
	Sleep(2500);
	cout << mom << "�����Է�����" << endl;
	Sleep(2500);
	cout <<  "*Ҫ����(��/����)*" << endl;
	cin >> shuru;
	if (shuru == "��") {
		cout << "��������" << endl;;
		mx ++;
	} else if (shuru == "����") {
		cout << mom << "��****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�����" << endl;;
		Sleep(1000);
		cout << you << "��****��������������������������������������������������������" << endl;;
		mx--;
		wx--;
	} else {
		cout << mom << "����������ô����****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�������****���Է�����" << endl;;
		Sleep(1000);
		cout << you << "��****��������������������������������������������������������" << endl;;
		mx--;
	}
	return 0;
}

int Test() {
	cout <<  "*���ǿ���*" << endl;
	Wait(5);
	if (zz > 50) {
		cout << you  << "�����ɣ�" << endl;
		Sleep(2500);
		cout << mom << "���ĺò���" << endl;
		cout <<  "*(��/����)*" << endl;
		cin >> shuru;
		if (shuru == "��") {
			cout << mom << "�ã���" << endl;
		} else if (shuru == "����") {
			cout << mom << "��ʦ˵�㿼�ĺã���" << endl;
		}
		mx = mx + 5;
	}
	if (zz <= 50) {
		cout << you  << "���ѣ�" << endl;
		Sleep(2500);
		cout << mom << "���ĺò���" << endl;
		cin >> shuru;
		if (shuru == "��") {
			cout << mom << "��ʦ˵�㿼�Ĳ��ã���" << endl;
		} else if (shuru == "����") {
			cout << mom << "�������飡����" << endl;
		}
		mx = mx - 5;
	}
	zz = zz - 20;
	return 0;
}

int Day(int day) {
	if (day == 1) {
		cout << "*����:���ɣɣ�������Сѩ������һ��������г���ü�ͥ�����뱻ǿ�ȵ�������*(�ȴ�)" << endl;
		Sleep(1500);
		cout << "*����ʵ��������������£�û����Ϣ��ֻ��ѧϰ������*" << endl;
		Sleep(2500);
		cout << "*�㻹Ҫ��21����п�������*" << endl;
		Sleep(2500);
		cout << mom  << "ɣɣ,������������ѧ�ٵ���������" << endl;
		Sleep(2500);
		cout << you  << "��֪����" << endl;
		Sleep(2500);
		cout <<  "*�㵽��ѧУ*" << endl;
		Sleep(2500);
		Math();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*��ѧ��*" << endl;
		Sleep(2500);
		cout <<  "*�㵽�˼�*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 2) {
		cout << mom  << "ɣɣ,������������ѧ�ֳٵ���������������˯��̫���ˣ�����" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*�㵽��ѧУ*" << endl;
		Sleep(2500);
		English();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*��ѧ��*" << endl;
		Sleep(2500);
		cout <<  "*�㵽�˼�*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 3) {
		cout << mom  << "ɣɣ,������������ѧ�ֳٵ���������������˯��̫���ˣ�����" << endl;
		Sleep(2500);
		cout << you  << "�����㣡��" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*�㵽��ѧУ*" << endl;
		Sleep(2500);
		cout << "*��ٵ���*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*��ѧ��*" << endl;
		Sleep(2500);
		cout <<  "*�㵽�˼�*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 4) {
		cout << mom  << "ɣɣ,������..." << endl;
		Sleep(2500);
		cout << you  << "10:24!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*�㵽��ѧУ*" << endl;
		Sleep(2500);
		cout << "*��ٵ���*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		English();
		Sleep(2500);
		cout <<  "*��ѧ��*" << endl;
		Sleep(2500);
		cout <<  "*�㵽�˼�*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 5) {
		cout << mom  << "ɣɣ,������������ѧ�ٵ���������" << endl;
		Sleep(2500);
		cout << you  << "��֪����" << endl;
		Sleep(2500);
		cout <<  "*�㵽��ѧУ*" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*��ѧ��*" << endl;
		Sleep(2500);
		cout <<  "*�㵽�˼�*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 6) {
		cout << mom  << "ɣɣ,������������ѧ�ٵ���������" << endl;
		Sleep(2500);
		cout << you  << "������ĩ������" << endl;
		Sleep(2500);
		cout << mom  << "�ǾͶ���" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "������" << endl;
		cout << "*(��/����)*" << endl;
		cin >> shuru;
		if (shuru == "��") {
			cout << mom << "��" << endl;
			mx = mx + 5;
		}
		if (shuru == "����") {
			cout << mom << "�㿼����ô����������" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Study();
		Sleep(2500);
		cout <<  "*������*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 7) {
		cout << mom  << "ɣɣ,�������������飡����" << endl;
		Sleep(2500);
		cout << you  << "�ã�����" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "������" << endl;
		cout << "*(��/����)*" << endl;
		cin >> shuru;
		if (shuru == "��") {
			cout << mom << "��" << endl;
			mx = mx + 5;
		}
		if (shuru == "����") {
			cout << mom << "�㿼����ô����������" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Study();
		Sleep(2500);
		cout <<  "*������*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day > 7) {
		GAMEMODE = "win";
	}
	return 0;
}
int main() {
	cout << "��ӭ������ ��ʵ�����е�ˮ����-�ҵ����" << endl << "����ʵ�¼��ı࣡" << "Made By GHY And ZYX" << endl;
	while (GAMEMODE == "ready") {
		cout << "�µ���Ϸ/����" << endl;
		cin >> shuru;
		if (shuru == "�µ���Ϸ") {
			GAMEMODE = "star";
		} else if (shuru == "����") {
			GAMEMODE = "dudang";
		} else {
			cout << "��������ȷ����(��:�µ���Ϸ)" << endl;
		}
	}
	if (GAMEMODE == "dudang") {
		int jym = 0;
		cout << "�����뱣����" << endl;
		while (GAMEMODE == "dudang") {
			cin >> ml >> wl >> q >> wx >> mx >> days >> zz >> jym;
			if (jym == ml + wl + q + wx + mx + days + zz) {
				GAMEMODE = "star";
			} else {
				cout << "��������ȷ������(���ܸ��汾��᲻����)" << endl;
			}
		}
	} else if (GAMEMODE == "star") {
		for (int i = days; i <= 110; i++) {
			cout <<  "*��" << i << "��,����" << 21 - i << "��" << endl;
			Day(i);
		}
	} else if  (GAMEMODE == "momdie") {
		cout << "*Сѩ���ˡ����������鲻�ã��Ը�;Ҳ�����Ǳ�����ˡ�����ֻ��һ�Ρ���������Ϸ����ȥ������*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*��Ϸ����*" << endl;
		cin >> temp;
	} else if (GAMEMODE == "medie") {
		cout << "*ɣɣ���ˡ����������鲻�ã��Ը�;Ҳ�����Ǳ�����ˡ�����ֻ��һ�Ρ���������Ϸ����ȥ������*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*��Ϸ����*" << endl;
		cin >> temp;
	} else if (GAMEMODE == "win") {
		cout << "*��Ӯ��*" << endl;
		cout << "����(GHY):��Ǹ����ֻ�����������л������棡�һ���µģ�(bilibili:   th_96301)" << endl;
		Sleep(2500);
		cout << "����(ZYX)(ɣɣ):�����ҵ���ʵ�����л������棡����Ҫ�������ˣ�" << endl;
		Sleep(2500);
		cout << mom << "��ô������������������" << endl;
		Sleep(2500);
		cout << "����(GHY):���ӣ�" << endl;
		Sleep(2500);
		cout << mom << "��****����****��****��****��" << endl;
		cin >> temp;
	}
	return 0;
}
