import java.util.Scanner;
public class MyProgram  {
      static char[][] table= new char[5][5];
    static void createTable() {
        for(int i=0; i<2; i++)
            for(int j=0; j<5; j++) {
                if(i*5+j+65!=74)
                    table[i][j]=(char)(i*5+j+65);
            }table[1][4]='K';
        for(int i=2;i<5;i++)
            for(int j=0;j<5;j++)
                table[i][j]=(char)(i*5+j+65+1);


    }
  




}
