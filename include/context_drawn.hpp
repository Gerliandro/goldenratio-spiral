#pragma once 

#include <camera.hpp>
#include <object.hpp>
#include <glm/ext.hpp>

Camera main_cam = {
    .eye = glm::vec3(5, 5, 5),
    .at  = glm::vec3(0, 0, 0),
    .up  = glm::vec3(0, 1, 0)
};

void frustum_axis(bool lever)
{
    if(!lever)
        return;
   
    glBegin(GL_LINES);
        //Red   X-Axis 
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( 0.0, 0.0, 0.0);
        glVertex3f(10.0, 0.0, 0.0);

        //Green Y-Axis
        glColor3f(0.0, 1.0, 0.0);
        glVertex3f( 0.0, 0.0, 0.0);
        glVertex3f( 0.0,10.0, 0.0);

        //Blue  Z-Axis 
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f( 0.0, 0.0, 0.0);
        glVertex3f( 0.0, 0.0,10.0);
    glEnd();
}

void drawn_3d_context()
{
    glMatrixMode(GL_MODELVIEW);

    glLoadMatrixf(cam_look_at(main_cam));

    frustum_axis(true);
}