#pragma once

class IndexBuffer
{
private:
	unsigned int m_RendererID;
	unsigned int m_count;
public:
	IndexBuffer(unsigned int count, const unsigned int* data);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline unsigned GetCount() const{ return m_count; }
};