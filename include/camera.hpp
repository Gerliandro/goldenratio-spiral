#pragma once

#include <glm/ext.hpp>

typedef struct
{   
    glm::vec3 eye,
              at,
              up;            
} Camera;

auto cam_look_at(Camera cam_config)
{
    glm::mat4 view_mat = glm::lookAt(
        cam_config.eye,
        cam_config.at ,
        cam_config.up
    );

    return glm::value_ptr(view_mat);
}