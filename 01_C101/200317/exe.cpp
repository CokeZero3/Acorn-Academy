#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
#include <string.h>		//strcmp 함수가 선언된 헤더 파일

#define LINE "=================================================="
#define DAYS		50
#define DAY		50

//daily routine
void mR6() {
	printf("%s\n", LINE);
	printf("\t\t0600 AM Routine\t\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "0600 Wake Up");
	printf("\t%s\n", "0630 Morning read & Daily planning");
	printf("\t%s\n", "0700 Work Out");
	printf("\t%s\n", "0850 Breakfast");
	printf("\t%s\n", "0930 Acorn Academy");
	printf("%s\n", LINE);
}
void mR7() {
	printf("%s\n", LINE);
	printf("\t\t0700 AM Routine\t\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "0700 Wake Up");
	printf("\t%s\n", "0730 Morning read & Day plan  ");
	printf("\t%s\n", "0800 Breakfast & Get Ready");
	printf("\t%s\n", "0930 Acorn Academy");
	printf("%s\n", LINE);
}
void mR8() {
	printf("%s\n", LINE);
	printf("\t\t0800 AM Routine\t\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "0800 Wake Up & Get Ready");
	printf("\t%s\n", "0930 Acorn Academy");
	printf("%s\n", LINE);
}
void mR0() {
	printf("%s\n", LINE);
	printf("\t Basic Routine:\nEnjoy your day to the fullest :D\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "0000 Wake Up");
	printf("\t%s\n", "0000 Read & Daily planning");
	printf("\t%s\n", "0000 Work Out");
	printf("\t%s\n", "0000 Eat");
	printf("\t%s\n", "0000 Study");
	printf("%s\n", LINE);
}
void wOmon() {
	printf("%s\n", LINE);
	printf("\t Monday Workout Routine: Chest Day \t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1.Bench Press: 4 sets x 12 reps");
	printf("\t%s\n", "2.Incline Bench Press: 4 sets x 12 reps");
	printf("\t%s\n", "3.Seated Chest Press: 4sets x 12reps");
	printf("%s\n", LINE);
}
void wOtues() {
	printf("%s\n", LINE);
	printf("\t Tuesday Workout Routine: Back Day\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1.Deadlift: 4 sets x 12 reps");
	printf("\t%s\n", "2.Chin Up: 4 sets x 12 reps");
	printf("\t%s\n", "3. Lat Pulldown: 4sets x 12reps");
	printf("\t%s\n", "3. Seated Row: 4sets x 12reps");
	printf("%s\n", LINE);
}
void wOwed() {
	printf("%s\n", LINE);
	printf("\t Wednesday Workout Routine: Back Day\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1.Wide Suqats: 4 sets x 25reps");
	printf("\t%s\n", "2.Narrow Squats: 4 sets x 25 reps");
	printf("\t%s\n", "3. Leg Extention: 4sets x 12reps");
	printf("\t%s\n", "4. Leg Curl: 4sets x 12reps");
	printf("%s\n", LINE);
}
void wOthurs() {
	printf("%s\n", LINE);
	printf("\t Thursday Workout Routine: Shoulder Day\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1.Millitary Press: 4 sets x 10reps");
	printf("\t%s\n", "2.Dumbell Shoulder Press: 4 sets x 10 reps");
	printf("\t%s\n", "3. Side Lateral Raise: 4sets x 10reps");
	printf("\t%s\n", "4. Rear Delt Fly: 4sets x 10reps");
	printf("%s\n", LINE);
}
void wOfri() {
	printf("%s\n", LINE);
	printf("\t Friday Workout Routine: Shoulder Day\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1.Millitary Press: 4 sets x 10reps");
	printf("\t%s\n", "2.Dumbell Shoulder Press: 4 sets x 10 reps");
	printf("\t%s\n", "3. Side Lateral Raise: 4sets x 10reps");
	printf("\t%s\n", "4. Rear Delt Fly: 4sets x 10reps");
	printf("%s\n", LINE);
}
void wOweekend() {
	printf("%s\n", LINE);
	printf("\t Weekend Workout Routine: Abs Day\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1: 30 seconds mountain climbers ");
	printf("\t%s\n", "2: 15 double crunches ");
	printf("\t%s\n", "3: 15 double tap twist crunch  ");
	printf("\t%s\n", "4. Rear Delt Fly: 4sets x 10reps");
	printf("\t%s\n", "5: 15 double tap twist crunch opposite side");
	printf("\t%s\n", "6: 30 seconds mountain climbers ");
	printf("\t%s\n", "7: 15 seated knee tucks ");
	printf("\t%s\n", "8: 100 flutter kicks ");
	printf("\t%s\n", "9: 30 second crunch hold ");
	printf("%s\n", LINE);
}
int main(int argc, char* argv[]) {
	int time;
	char day[20];

	//문자열 저장
	char days1[DAYS] = "mon";
	char days2[DAYS] = "tues";
	char days3[DAYS] = "wed";
	char days4[DAYS] = "thurs";
	char days5[DAYS] = "fri";
	char days6[DAYS] = "weekend";
	//
	char day1[DAY] = "mon";
	char day2[DAY] = "tues";
	char day3[DAY] = "wed";
	char day4[DAY] = "thurs";
	char day5[DAY] = "fri";
	char day6[DAY] = "weekend";
	/* 
	//확인용
	if (strcmp(days1, day1) == 0) {
		printf("%s 와 %s는 같다.\n", days1, day1);
	}
	else {
		printf("%s 와 %s는 다르다.\n", days1, day1);
	}
	return 0;
	}*/
	printf("What time did you wake up? ");
	scanf_s("%d", &time);

	switch (time) {
	case 6: mR6();
		printf("What day is it today?\nmon, tues, wed, thurs, fri, weekend\n");
		scanf_s("%d", &day);

		if (strcmp(days1, day1) == 0) {
			wOmon();
		}
		else if (strcmp(days2, day2) == 0) {
			wOtues();
		}
		else if (strcmp(days3, day3) == 0) {
			wOwed();
		}
		break;

	case 7: mR7(); break;
	case 8: mR8(); break;
	default: mR0();

	}
}




/*
if (time == 6) {
	mR6();
}
else if (time == 7) {

	mR7();
}if (time == 8) {

	mR8();
}
else mR0();
}
*/