struct Vec
{
	float x;
	float y;
	float z;
};
struct Shape {
	float width, height;
	float radius;
	Vec center;
};
struct Platform
{
	Shape platform[5];
	Platform *next;
};
