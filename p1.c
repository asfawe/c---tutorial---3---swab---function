#include <stdio.h>
#include <stdlib.h> // swab() 함수가 선언되어 있는 헤더 파일(stdlib.h)을 포함합니다.

// swab() 함수의 원형은 다음과 같습니다.

// void swab(char *src, char *dest, int count);

// src는 원본 문자열이며, dest는 바뀌어진 문자가 저장될 버퍼의 포인터입니다. 그리고 count는 바뀌어질 총 문자의 수입니다.

void main(void)
{
       char string1[] = "1a2b3c4d5e"; // 숫자, 문자, 숫자, 문자 순으로 형성된 문자열을 정의합니다.
       char string2[] = ".........."; // swab() 함수에 의해 교체된 문자들을 저장하기 위한 문자 버퍼를 정의합니다.

       puts(string1);
       puts(string2);

       swab(string1, string2, sizeof(string1) - 1); // 문자열을 2바이트씩 잘라서 앞뒤로 교체합니다.
       // 교체된 문자들은 string2 버퍼에 저장되며, 교체할 문자열의 길이는 sizeof(string1)입니다. sizeof(string1)은 string1이 정의된 배열의 크기와 같습니다.
       // 여기서 sizeof(string1)은 11(문자열의 수 + NULL)입니다.

       puts(string1);
       puts(string2);
}
