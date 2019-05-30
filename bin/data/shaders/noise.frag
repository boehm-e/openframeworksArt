#version 100

precision highp float;

varying vec2 texCoordVar;

void main(){
	vec2 newTexCoord = vec2(texCoordVar.x, texCoordVar.y);

	gl_FragColor = vec4(newTexCoord,0.0,1.0);
}
