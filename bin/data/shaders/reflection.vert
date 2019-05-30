#version 150

in vec4 position;
in vec2 textureCoordinates;
in vec3 normal;

out vec3 pass_normal;
out vec2 pass_textureCoordinates;
out vec3 reflectedVector;

uniform mat4 modelViewProjectionMatrix;
uniform mat4 transformationMatrix;
uniform mat4 projectionMatrix;
uniform mat4 viewMatrix;
uniform vec3 cameraPosition;

void main(void){

	vec4 worldPosition = transformationMatrix * position;
	gl_Position = modelViewProjectionMatrix * position;

	pass_textureCoordinates = textureCoordinates;
	pass_normal = normal;
	vec3 unitNormal = normalize(normal);

	vec3 viewVector = normalize(worldPosition.xyz - cameraPosition);
	reflectedVector = reflect(viewVector, unitNormal);

}
