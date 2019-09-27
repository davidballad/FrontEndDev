/* CS288 H3 Session-2 HW#12; Passing structure to function; David Balladares; Date 8/1/2019 */

#include <stdio.h>
#include <string.h>


struct player{
  int wins, losses;
  char teamName[20];
  int rankPosition;
  float rankPercent;

};

void func(struct player record);

int main(int argc, char const *argv[]) {
  struct player record;

  record.wins = 3;
  record.losses = 4;
  record.rankPosition = 2;
  strcpy(record.teamName, "Thunders");
  record.rankPercent = 42.8;

  func(record);
  return 0;
}

void func(struct player record){

  printf("Team Name is: %s \n", record.teamName);
  printf("Wins: %d\n", record.wins);
  printf("Losses: %d\n", record.losses);
  printf("Position: %d\n", record.rankPosition);
  printf("Percentage is: %f\n", record.rankPercent);
}

/* Assignment: Write a simple program Passing Structure to Function.  Global Structure should have char TeamName, int Wins, int Losses, int PositionInRank, float RankPerct.  Main populates fields with values.  Main calls function.  Function prints values individual lines.   */
