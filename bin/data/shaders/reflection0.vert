#version 120

varying vec3 reflectVec;

uniform vec4 position;
uniform mat4 modelViewProjectionMatrix;
uniform mat4 transformationMatrix;
uniform mat4 projectionMatrix;
uniform mat4 viewMatrix;

void main()
{
	vec4 worldPosition = transformationMatrix * position;
	vec3 V = vec3(modelViewProjectionMatrix * gl_Vertex);
	vec3 N = normalize(gl_NormalMatrix * gl_Normal);

	reflectVec = reflect(V, N);

	gl_Position = modelViewProjectionMatrix * gl_Vertex;
}
