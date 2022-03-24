#include <stdio.h>
typedef struct {
	float x;
	float y;
} jum;
void AddValueToJum(jum *j)
{
	j.x += 10.0;
	j.y += 15.0f;

}
void AddValueToJum(jum *j);
int main(void)
{
	jum jum;
	jum.x = 5.0f;
	jum.y = 10.0f;
	AddValueToJum(&jum);
	return 0;
}