#include <windows.h>
#include <iostream>
using namespace std;
string shuru, temp;
string GAMEMODE = "ready";
int ml = 100, wl = 100, q = 0, wx = 100, mx = 100, days = 1, zz = 50;
string you = "桑桑:", mom = "小雪:";
//	cout <<  "*这是读书*" << endl;
//	Sleep(2500);
//	cout << mom << "那就快来学习！！"<< endl;
//	cout << you  << "我知道了" << endl;
//	cin >> shuru;

int Fight() {
	cout << mom << "！！！" << endl;
	Sleep(1000);
	cout <<  "*你妈打了你，有点疼*" << endl;
	wl = wl - 5;
	mx = mx - 5;
	Sleep(1000);
	cout << "*还击？(重击/轻击/不了)*" << endl;
	cin >> shuru;
	if (shuru == "重击") {
		cout <<  "*你重击了你妈*" << endl;
		ml = ml - 10;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 10;
		wx = wx + 10;
	} else if (shuru == "轻击") {
		cout <<  "*你轻击了你妈*" << endl;
		ml = ml - 5;
		Sleep(1000);
		cout << mom << "..." << endl;
		mx = mx - 5;
		wx = wx + 5;
	} else if (shuru == "不了") {
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
	cout << mom << "该睡觉了" << endl;;
	cout << "*要睡觉(存档)吗？(要/不要)*" << endl;
	cin >> shuru;
	if (shuru == "要") {
		cout << mom << "睡吧睡吧......" << endl;;
		Sleep(2500);
		mx++;
		cout <<  "*睡着了......*" << endl;
	} else if (shuru == "不要") {
		cout << mom << "不，你 要 **** 睡 觉" << endl;;
		Sleep(2500);
		mx--;
		wx--;
		cout << you  << "我知道了" << endl;
		Sleep(3000);
		cout <<  "*睡着了......*" << endl;
	} else {
		cout << mom << "胡言乱语？？快 来 睡 觉！！" << endl;;
		Sleep(2500);
		cout <<  "*睡着了......*" << endl;
	}
	cout <<  "*保存码:" << ml << " " << wl << " " << q << " " << wx << " " << mx << " " << days << " " << zz << " " << ml + wl + q + wx + mx + days + zz << "*" << endl;
	cout << "*请妥善保管！*" << endl;
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
	cout <<  "*这是读书*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*很轻松地，这书读完了*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*很困难地，这书读完了*" << endl;
		zz++;
	}
	return 0;
}

int Study() {
	cout << "*要睡觉(存档)吗？(要/不要)*" << endl;
	cin >> shuru;
	if (shuru == "要") {
		cout << mom << "不行，快来学习！！" << endl;;
		Sleep(2500);
		cout <<  "*只能学习了*" << endl;
		Sleep(2500);
		wx--;
		mx--;
		Read();
	} else if (shuru == "不要") {
		cout << mom << "那就快来学习！！" << endl;;
		Sleep(2500);
		cout <<  "*学习了*" << endl;
		Sleep(2500);
		mx++;
		wx++;
		Read();
	} else {
		cout << mom << "胡言乱语？？快来学习！！" << endl;;
		Sleep(2500);
		cout <<  "*学习了*" << endl;
		Sleep(2500);
		Read();
	}
	return 0;
}

int Math() {
	cout <<  "*  5x+5=10  这x节是数学*" << endl;
	Sleep(2500);
	if (zz >= 50) {
		cout <<  "*很轻松地，这x节课完了*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*很困难地，这x节课完了*" << endl;
		zz++;
	}
	return 0;
}

int Chinese() {
	cout <<  "*此刻我们步入的是语文的殿堂，这里蕴藏着华夏五千年的文化精髓。*" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*这堂课在轻松愉快的氛围中圆满结束。*" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*尽管充满挑战，这堂课终于圆满结束。*" << endl;
		zz++;
	}
	return 0;
}

int English() {
	cout <<  "*This class is English class*" << "(机翻:这门课是英语课)" << endl;
	Wait(5);
	if (zz >= 50) {
		cout <<  "*Easily,this English class is finish*" << "(机翻:很容易，这堂英语课就完成了)" << endl;
		zz++;
	}
	if (zz < 50) {
		cout <<  "*Difficultily,this English class is finish*" << "(机翻:难，这节英语课就结束了)" << endl;
		zz++;
	}
	return 0;
}

int Eat() {
	cout <<  "*你妈送来了饭盒*" << endl;
	Sleep(2500);
	cout << mom << "快来吃饭！！" << endl;
	Sleep(2500);
	cout <<  "*要吃吗？(吃/不吃)*" << endl;
	cin >> shuru;
	if (shuru == "吃") {
		cout << "来啦！！" << endl;;
		mx ++;
	} else if (shuru == "不吃") {
		cout << mom << "快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！" << endl;;
		Sleep(1000);
		cout << you << "我****来啦！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;;
		mx--;
		wx--;
	} else {
		cout << mom << "胡言乱语社么，快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！快****来吃饭！！" << endl;;
		Sleep(1000);
		cout << you << "我****来啦！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;;
		mx--;
	}
	return 0;
}

int Test() {
	cout <<  "*这是考试*" << endl;
	Wait(5);
	if (zz > 50) {
		cout << you  << "好轻松！" << endl;
		Sleep(2500);
		cout << mom << "考的好不？" << endl;
		cout <<  "*(好/不好)*" << endl;
		cin >> shuru;
		if (shuru == "好") {
			cout << mom << "好！！" << endl;
		} else if (shuru == "不好") {
			cout << mom << "老师说你考的好！！" << endl;
		}
		mx = mx + 5;
	}
	if (zz <= 50) {
		cout << you  << "好难！" << endl;
		Sleep(2500);
		cout << mom << "考的好不？" << endl;
		cin >> shuru;
		if (shuru == "好") {
			cout << mom << "老师说你考的不好！！" << endl;
		} else if (shuru == "不好") {
			cout << mom << "让你多读书！！！" << endl;
		}
		mx = mx - 5;
	}
	zz = zz - 20;
	return 0;
}

int Day(int day) {
	if (day == 1) {
		cout << "*剧情:你叫桑桑，你妈叫小雪。你是一个向往和谐美好家庭，不想被强迫的青少年*(等待)" << endl;
		Sleep(1500);
		cout << "*但现实生活你妈催你做事，没有休息，只有学习！！！*" << endl;
		Sleep(2500);
		cout << "*你还要在21天后中考！！！*" << endl;
		Sleep(2500);
		cout << mom  << "桑桑,快起来啦，上学迟到啦！！！" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Math();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 2) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦！！！你昨晚睡得太晚了！！！" << endl;
		Sleep(2500);
		cout << you  << "..." << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		English();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 3) {
		cout << mom  << "桑桑,快起来啦，上学又迟到啦！！！你昨晚睡得太晚了！！！" << endl;
		Sleep(2500);
		cout << you  << "都怪你！！" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 4) {
		cout << mom  << "桑桑,起来啦..." << endl;
		Sleep(2500);
		cout << you  << "10:24!!!!!!!" << endl;
		Sleep(2500);
		Fight();
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		cout << "*你迟到了*" << endl;
		Sleep(2500);
		Eat();
		Sleep(2500);
		English();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 5) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦！！！" << endl;
		Sleep(2500);
		cout << you  << "我知道了" << endl;
		Sleep(2500);
		cout <<  "*你到了学校*" << endl;
		Sleep(2500);
		Test();
		Sleep(2500);
		Eat();
		Sleep(2500);
		Chinese();
		Sleep(2500);
		cout <<  "*放学了*" << endl;
		Sleep(2500);
		cout <<  "*你到了家*" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Slept();
	}
	if (day == 6) {
		cout << mom  << "桑桑,快起来啦，上学迟到啦！！！" << endl;
		Sleep(2500);
		cout << you  << "今天周末！！！" << endl;
		Sleep(2500);
		cout << mom  << "那就读书" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗？" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读！！" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Study();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day == 7) {
		cout << mom  << "桑桑,快起来啦，读书！！！" << endl;
		Sleep(2500);
		cout << you  << "好！！！" << endl;
		Sleep(2500);
		Study();
		Sleep(2500);
		Eat();
		Sleep(2500);
		cout << mom << "还读吗？" << endl;
		cout << "*(读/不读)*" << endl;
		cin >> shuru;
		if (shuru == "读") {
			cout << mom << "好" << endl;
			mx = mx + 5;
		}
		if (shuru == "不读") {
			cout << mom << "你考得那么差，必须读！！" << endl;
			mx = mx - 5;
			wx = wx - 5;
		}
		Study();
		Sleep(2500);
		cout <<  "*晚上了*" << endl;
		Sleep(2500);
		Slept();
	}
	if (day > 7) {
		GAMEMODE = "win";
	}
	return 0;
}
int main() {
	cout << "欢迎来到“ 现实生活中的水火不容-我的生活”" << endl << "据真实事件改编！" << "Made By GHY And ZYX" << endl;
	while (GAMEMODE == "ready") {
		cout << "新的游戏/读档" << endl;
		cin >> shuru;
		if (shuru == "新的游戏") {
			GAMEMODE = "star";
		} else if (shuru == "读档") {
			GAMEMODE = "dudang";
		} else {
			cout << "请输入正确词组(如:新的游戏)" << endl;
		}
	}
	if (GAMEMODE == "dudang") {
		int jym = 0;
		cout << "请输入保存码" << endl;
		while (GAMEMODE == "dudang") {
			cin >> ml >> wl >> q >> wx >> mx >> days >> zz >> jym;
			if (jym == ml + wl + q + wx + mx + days + zz) {
				GAMEMODE = "star";
			} else {
				cout << "请输入正确保存码(可能各版本间会不兼容)" << endl;
			}
		}
	} else if (GAMEMODE == "star") {
		for (int i = days; i <= 110; i++) {
			cout <<  "*第" << i << "天,还有" << 21 - i << "天" << endl;
			Day(i);
		}
	} else if  (GAMEMODE == "momdie") {
		cout << "*小雪噶了。可能是心情不好，自噶;也可能是被打噶了。人世只有一次。但这是游戏，能去读档。*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*游戏结束*" << endl;
		cin >> temp;
	} else if (GAMEMODE == "medie") {
		cout << "*桑桑噶了。可能是心情不好，自噶;也可能是被打噶了。人世只有一次。但这是游戏，能去读档。*" << endl;
		cout << "*GAME OVER*" << endl;
		cout << "*游戏结束*" << endl;
		cin >> temp;
	} else if (GAMEMODE == "win") {
		cout << "*你赢了*" << endl;
		cout << "作者(GHY):抱歉，我只做到了这里，感谢你的游玩！我会更新的！(bilibili:   th_96301)" << endl;
		Sleep(2500);
		cout << "剧情(ZYX)(桑桑):这是我的真实生活，感谢你的游玩！（我要被烦噶了）" << endl;
		Sleep(2500);
		cout << mom << "社么？？？？！！！！！" << endl;
		Sleep(2500);
		cout << "作者(GHY):快逃！" << endl;
		Sleep(2500);
		cout << mom << "我****，你****，****，****！" << endl;
		cin >> temp;
	}
	return 0;
}
