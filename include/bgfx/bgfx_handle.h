#ifndef BGFX_HANDLE_H_HEADER_GUARD
#define BGFX_HANDLE_H_HEADER_GUARD

#include <stdint.h> // uint32_t

///
#define BGFX_HANDLE(_name)                                                           \
	struct _name { uint16_t idx; };                                                  \
	inline bool isValid(_name _handle) { return bgfx::kInvalidHandle != _handle.idx; }

#define BGFX_INVALID_HANDLE { bgfx::kInvalidHandle }

namespace bgfx
{
	static const uint16_t kInvalidHandle = UINT16_MAX;

	BGFX_HANDLE(DynamicIndexBufferHandle)
	BGFX_HANDLE(DynamicVertexBufferHandle)
	BGFX_HANDLE(FrameBufferHandle)
	BGFX_HANDLE(IndexBufferHandle)
	BGFX_HANDLE(IndirectBufferHandle)
	BGFX_HANDLE(OcclusionQueryHandle)
	BGFX_HANDLE(ProgramHandle)
	BGFX_HANDLE(ShaderHandle)
	BGFX_HANDLE(TextureHandle)
	BGFX_HANDLE(UniformHandle)
	BGFX_HANDLE(VertexBufferHandle)
	BGFX_HANDLE(VertexLayoutHandle)
}

#endif // BGFX_HANDLE_H_HEADER_GUARD
