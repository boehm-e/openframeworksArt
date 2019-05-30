#version 100

uniform mat4 modelViewProjectionMatrix;
attribute vec2 texcoord;
attribute vec4 position;

varying vec2 texCoordVar;

void main()
{
	gl_Position = modelViewProjectionMatrix * position;
	texCoordVar = texcoord;
}
