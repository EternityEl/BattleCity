#pragma once

#include <glad/glad.h>
#include <string>

namespace Renderer {

	class Texture2D
	{
	public:
		Texture2D(const GLuint width, GLuint heigth, 
				  const unsigned char* data, 
				  const unsigned int channels,
				  const GLenum filter, 
				  const GLenum wrapMode);
		Texture2D() = delete;
		Texture2D(const Texture2D&) = delete;
		Texture2D& operator=(const Texture2D&) = delete;
		Texture2D& operator=(Texture2D&& texture2d);
		Texture2D(Texture2D&& texture2d);
		~Texture2D();

		void bind() const;
		
	private:
		GLuint m_ID;
		GLenum m_mode;
		unsigned int m_width;
		unsigned int m_heigth;
	};
}