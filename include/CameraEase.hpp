#pragma once
#include <raylib.h>
#include <raymath.h>
void CameraEase(Camera2D *camera, Vector2 position, float delta, int width, int height)
{
    static float minSpeed = 30;
    static float minEffectLength = 100;
    static float fractionSpeed = 1.2f;

    camera->offset = (Vector2){ width/2.0f, height/2.0f };
    Vector2 diff = Vector2Subtract(position, camera->target);
    float length = Vector2Length(diff);

    if (length > minEffectLength)
    {
        float speed = fmaxf(fractionSpeed*length, minSpeed);
        camera->target = Vector2Add(camera->target, Vector2Scale(diff, speed*delta/length));
    }
}
void CameraEaseExtreme(Camera2D *camera, Vector2 position, float delta, int width, int height)
{
    static float minSpeed = 30;
    static float minEffectLength = 10;
    static float fractionSpeed = 0.8f;

    camera->offset = (Vector2){ width/2.0f, height/2.0f };
    Vector2 diff = Vector2Subtract(position, camera->target);
    float length = Vector2Length(diff);

    if (length > minEffectLength)
    {
        float speed = fmaxf(fractionSpeed*length, minSpeed);
        camera->target = Vector2Add(camera->target, Vector2Scale(diff, speed*delta/length));
    }
}