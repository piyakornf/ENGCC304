#include <stdio.h>
#include <stdlib.h> // สำหรับฟังก์ชันที่เกี่ยวข้องกับการแปลงข้อมูล
#include <time.h>   // สำหรับใช้กับฟังก์ชัน time() เพื่อทำคำตอบให้ random เปลี่ยนทุกครั้ง

int main()
{
    int play, answer, guess, score; // play เก็บค่า 1 หรือ -1 answer คำตอบ guess ตัวเลขที่ผู้ใช้ทายคะแนน
    int min, max;                   // min, max – ขอบเขตของการทาย 1-100
    char input[100];

    srand(time(NULL)); // ให้สุ่มตัวเลขเปลี่ยนทุกครั้งโดยใช้เวลา

    do
    { // เริ่มต้นลูป do-while เพื่อให้เล่นซ้ำจนกว่าจะเลือก -1
        printf("Do you want to play game (1=play,-1=exit) :\n");
        fgets(input, sizeof(input), stdin); // รับค่าที่ผู้ใช้พิมพ์โดยไม่สนว่าจะถูกหรือผิดก่อนแล้วค่อยไปตรวจสอบภายหลัง

        if (sscanf(input, "%d", &play) != 1 || (play != 1 && play != -1)) //!= 1 แปลว่าไม่สามารถแปลงข้อมูลให้ได้เลขจำนวนเต็ม 1 ค่าได้
        { // sscanf() พยายามแปลง input ให้เป็นเลขจำนวนเต็มแล้วเก็บใน play
            // ถ้าแปลงไม่ได้ (!= 1) หรือค่าที่กรอกไม่ใช่ 1 หรือ -1 ถือว่าไม่ถูกต้อง
            printf("Please enter only 1 or -1.\n\n");
            play = 0; // แจ้งว่าค่าที่ป้อนไม่ถูกต้อง แล้ววนลูปใหม่
            continue; //ข้ามที่เหลือของลูป แล้วเริ่มรอบใหม่ทันที
        }

        if (play == 1)
        {
            answer = rand() % 100 + 1;
            score = 100;
            min = 1;
            max = 100;

            printf("\n(Score=100)\n\n");

            while (1)
            {                                                             // ลูปไม่มีที่สิ้นสุดรอให้ผู้เล่นทายถูกจึงจะbreak
                printf("Guess the winning number (%d-%d) :\n", min, max); // ให้ผู้ใช้ทายเลขพร้อมบอกช่วง(min-max)
                fgets(input, sizeof(input), stdin);                       // รับค่าที่ผู้ใช้พิมพ์โดยไม่สนว่าจะถูกหรือผิดก่อนแล้วค่อยไปตรวจสอบภายหลัง

                if (sscanf(input, "%d", &guess) != 1 || guess < min || guess > max)
                { // ตรวจสอบว่าค่าที่ป้อนเป็นตัวเลขหรือไม่และอยู่ในช่วงที่กำหนดหรือเปล่า
                    printf("Invalid input. Please enter a number between %d and %d.\n\n", min, max);
                    continue; // ข้ามคำสั่งที่เหลือในลูปรอบนั้นแล้วกลับไปเริ่มรอบใหม่
                }

                if (guess == answer)
                { // แจ้งว่าถูกต้องแสดงคำตอบที่ถูกแสดงคะแนนแล้ว break ออกจากลูป
                    printf("\nThat is correct! The winning number is %d.\n", answer);
                    printf("\nScore this game: %d\n\n", score);
                    break; //	หยุดลูปทันทีเมื่อคำตอบถูก
                }

                score -= 10; // เมื่อทายผิด

                if (guess < answer)
                { // บอกช่วงที่จะทายถ้าทายน้อยเกินไป
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                    if (guess + 1 > min)
                        min = guess + 1;
                }
                else
                { // บอกช่วงที่จะทายถ้าทายมากเกินไป
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                    if (guess - 1 < max)
                        max = guess - 1;
                }

                if (score == 0) {
                    printf("Game over. Please try again.\n\n");
                    break;
                }
            }
        }

    } while (play != -1); // ทำลูปซ้ำถ้าผู้เล่นยังไม่เลือกออก (-1)

    printf("\nSee you again.\n");
    return 0;
}
