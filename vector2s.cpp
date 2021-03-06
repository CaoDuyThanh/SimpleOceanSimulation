#include "vector2s.h"
#include <math.h>

Vector2s::Vector2s():
X(0), Y(0)
{
}
// ------------------------------------------------------------------------------------------------
Vector2s::Vector2s(double x, double y):
X(x), Y(y)
{
}
// ------------------------------------------------------------------------------------------------
double Vector2s::Length(){
    return sqrt(X * X + Y * Y);
}
// ------------------------------------------------------------------------------------------------
void Vector2s::Normalize(){
    double l = Length();
    X /= l;	Y /= l;
}
// ------------------------------------------------------------------------------------------------
double Vector2s::Dot(Vector2s b){
    return X * b.X + Y * b.Y;
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::Unit() {
    double length = this->Length();
    return Vector2s(X / length, Y / length);
}

Vector2s Vector2s::Conj() {
    return Vector2s(this->X, this->Y);
}

// ------------------------------------------------------------------------------------------------
bool Vector2s::operator == (const Vector2s& v){
    return X == v.X && Y == v.Y;
}
// ------------------------------------------------------------------------------------------------
bool Vector2s::operator != (const Vector2s& v){
    return X != v.X || Y != v.Y;
}
// ------------------------------------------------------------------------------------------------
Vector2s& Vector2s::operator += (const Vector2s& v){
    X += v.X; Y += v.Y;
    return *this;
}
// ------------------------------------------------------------------------------------------------
Vector2s& Vector2s::operator -= (const Vector2s& v){
    X -= v.X; Y -= v.Y;
    return *this;
}
// ------------------------------------------------------------------------------------------------
Vector2s& Vector2s::operator *= (const double value){
    X *= value; Y *= value;
    return *this;
}
// ------------------------------------------------------------------------------------------------
Vector2s& Vector2s::operator /= (const double value){
    X /= value; Y /= value;
    return *this;
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator + (const Vector2s& v2){
    return Vector2s(X + v2.X, Y + v2.Y);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator - (const Vector2s& v2){
    return Vector2s(X - v2.X, Y - v2.Y);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator * (const Vector2s& v2){
    return Vector2s(X * v2.X, Y * v2.Y);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator * (const double value){
    return Vector2s(X * value, Y * value);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator / (const double value){
    return Vector2s(X / value, Y / value);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator / (const Vector2s& v2){
    return Vector2s(X / v2.X, Y / v2.Y);
}
// ------------------------------------------------------------------------------------------------
Vector2s Vector2s::operator - (){
    return Vector2s(- X, - Y);
}
// ------------------------------------------------------------------------------------------------
