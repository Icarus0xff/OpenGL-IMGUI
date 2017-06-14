#version 330 core
out vec4 color;

in vec2 TexCoord;
in vec3 ourColor;

// texture samplers
uniform sampler2D texture1;
uniform sampler2D texture2;

void main()
{

    color = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), 0.5);
    //color = vec4(0.8);
}