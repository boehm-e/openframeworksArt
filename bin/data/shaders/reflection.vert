#version 150
out vec3 vecNormal;

in vec4 position;
in vec4 color;
in vec4 normal;

// these are passed in from OF programmable renderer
uniform mat4 modelViewProjectionMatrix;
uniform mat4 modelViewMatrix;
uniform mat4 projectionMatrix;
uniform mat4 textureMatrix;
uniform mat4 normalMatrix;

void main(){
    vecNormal = normal.xzy;
    gl_Position = modelViewProjectionMatrix * position;
}
