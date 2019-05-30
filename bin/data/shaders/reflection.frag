#version 150

out vec4 out_Colour;

in vec3 reflectedVector;
in vec2 pass_textureCoordinates;
in vec3 pass_normal;


uniform sampler2D modelTexture;
uniform samplerCube environMap;

const vec3 lightDirection = normalize(vec3(0.2, -1.0, 0.3));
const float ambient = 0.3;

void main(void){

	float brightness = max(dot(-lightDirection, normalize(pass_normal)), 0.0) + ambient;
	out_Colour = vec4(1.0,0.0,0.0,1.0) * brightness;
	// out_Colour = texture(modelTexture, pass_textureCoordinates) * brightness;

}
